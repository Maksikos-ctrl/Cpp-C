/* What is file handling?  */
/*

Why files are needed?

    When a program is terminated, the entire data is lost. Storing in a file will preserve your data even if the program terminates.
    If you have to enter a large number of data, it will take a lot of time to enter them all.
    However, if you have a file containing all the data, you can easily access the contents of the file using a few commands in C.
    You can easily move your data from one computer to another without any changes.

Types of Files

When dealing with files, there are two types of files you should know about:

    Text files
    Binary files

1. Text files

Text files are the normal .txt files. You can easily create text files using any simple text editors such as Notepad.

When you open those files, you'll see all the contents within the file as plain text. You can easily edit or delete the contents.

They take minimum effort to maintain, are easily readable, and provide the least security and takes bigger storage space.
2. Binary files

Binary files are mostly the .bin files in your computer.

Instead of storing data in plain text, they store it in the binary form (0's and 1's).

They can hold a higher amount of data, are not readable easily, and provides better security than text files.
File Operations

In C, you can perform four major operations on files, either text or binary:

    Creating a new file
    Opening an existing file
    Closing a file
    Reading from and writing information to a file




*/
//TODO In C, char *aa[] is a declaration of an array of pointers to characters.
//? Note that the declaration char *aa[] is equivalent to char **aa, which is an alternate way of declaring a pointer to a character.




/*

//* Use fgets instead of scanf to read input from the user: scanf can cause problems if the user enters more characters than the size of the buffer. Instead, you can use fgets to read a line of input from the user, which will prevent buffer overflows.


//* Consider using fputs instead of fprintf: fputs writes a string to a stream, and is generally simpler and more efficient than fprintf.

*/

/* 


Writing to a binary file

To write into a binary file, you need to use the fwrite() function. The functions take four arguments:

    address of data to be written in the disk
    size of data to be written in the disk
    number of such type of data
    pointer to the file where you want to write.

fwrite(addressData, sizeData, numbersData, pointerToFile);


*/


/* 

Getting data using fseek()

If you have many records inside a file and need to access a record at a specific position, you need to loop through all the records before it to get the record.

This will waste a lot of memory and operation time. An easier way to get to the required data can be achieved using fseek().

As the name suggests, fseek() seeks the cursor to the given record in the file.




*/

#include <stdio.h>  
#include <stdlib.h>



int main() {

    
    
    char *a;


    // using malloc


    

    a = (char*)malloc(50);

    if (a == NULL) {
        printf("Out of memory\n");
        return 0;
    }

   


    
    FILE *fptr;

    fptr = fopen("pidor.txt", "w+");

    if (fptr == NULL) {
        printf("Error openining file\n");
        return -1;
    
    }

    printf("Enter smth what u wanna: ");

    //* Read input from the user using fgets
    fgets(a, 50, stdin);

    
    //* Write the input to the file using fputs
    fputs(a, fptr);
    fclose(fptr);

    
    free(a);


    return 0;
}



