/*

//* what is enums and for what they are used for?

In C programming, an enumeration type (also called enum) is a data type that consists of integral constants. To define enums, the enum keyword is used.


enum flag {const1, const2, ..., constN};





*/


//TODO An enum variable can take only one value. Here is an example to demonstrate it,
//! Great example, write ur own button for windows with different styles

#include <stdio.h>


enum infoAboutPlayer {
    lives = 2,
    price = 2000,
    abilities = 10
} iAPl;


int main()
{
    iAPl = lives;

    printf("Size of enum var is %ld bytes\n", sizeof(iAPl));

    return 0;
}    


