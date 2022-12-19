#include <stdio.h>


typedef struct {

    char* title[60];
    bool isHuman;
    union {
        char* personality;
        int skin;
    };
} character;



void print_nieco(character* c);




int main() {
    

        

    printf("Name of the char will be: %s", c->title);

    


    printf("The size of the struct will be: %d\n", sizeof(s));
    printf("The size of the union will be: %d", sizeof(u));


    character anakinSky;
    character r2d2;
    anakinSky.title[0] = "Ananakin Skywalker";
    anakinSky.x = 100;
    anakinSky.y = 100;
    anakinSky.z = 0;

    r2d2.title[0] = "R2D2";
    r2d2.x = 0;
    r2d2.y = 0;
    r2d2.z = 0;


    print_nieco(&anakinSky);
    print_nieco(&r2d2);
    


    return 0;
}


void print_nieco(character* c) {

    printf("Character is %s -- ", c->title);

    if (c->isAlive) {
        printf("The skin which he has is %i", c->skin);
    } else {
        printf("%s", c->personality);
    }

    printf("\n");
    

    

    return 0;
}