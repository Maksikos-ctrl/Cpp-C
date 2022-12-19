/* 

Getting data using fseek()

If you have many records inside a file and need to access a record at a specific position, you need to loop through all the records before it to get the record.

This will waste a lot of memory and operation time. An easier way to get to the required data can be achieved using fseek().

As the name suggests, fseek() seeks the cursor to the given record in the file.
Syntax of fseek()

fseek(FILE * stream, long int offset, int whence);

The first parameter stream is the pointer to the file. The second parameter is the position of the record to be found, and the third parameter specifies the location where the offset starts.
Different whence in fseek()
	Whence
				Meaning
		
SEEK_SET
				Starts the offset from the beginning of the file.
		
SEEK_END
				Starts the offset from the end of the file.
		
SEEK_CUR
				Starts the offset from the current location of the cursor in the file.


*/


#include <stdio.h>  
#include <stdlib.h>



typedef struct ThreeNums {
    int n1, n2, n3;
} ThreeNums;


int main() {


    

    ThreeNums nums;

    FILE * fileptr;


    fileptr = fopen("program.bin", "rb");

    if (fileptr == NULL) {
        printf("Can't open program.bin\n");
        exit(1);
    }

    // moves cursor to the end of file
    fseek(fileptr, -sizeof(ThreeNums), SEEK_END);

    for (int n = 0; n < 5; ++n) {
        // Move the file pointer back by sizeof(ThreeNums) before reading
        fseek(fileptr, -2 * sizeof(ThreeNums), SEEK_END);


        // Check the return value of fread to ensure that it was successful
        if (fread(&nums, sizeof(ThreeNums), 1, fileptr) != 1) {
            printf("Error reading file\n");
            exit(1);
        }
        printf("%d %d %d\n", nums.n1, nums.n2, nums.n3);
        
        
    }

    fclose(fileptr);

    
    


    return 0;
}