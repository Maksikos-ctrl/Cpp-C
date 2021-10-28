#include<iostream>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
#define SCREEN_WIDTH 9
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70
#define MENU_WIDTH 20
#define GAP_SIZE 7
#define Enemy_DIF

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int enemyY[3];
int enemyX[3];
int enemyFlag[3];
char plane[3][5] = {
    ' ',' ','+',' ',' ',
    '|','+','+','+','|',
    '+','+','+','+' };
int planePos = WIN_WIDTH / 2;
int score = 0;
int bullets[20][4];
int bulletsLife[20];
int pIndex = 0;

void gotoxy(int x, int y){
     CursorPosition.X = x;
     CursorPosition.Y = y;
     SetConsoleCursorPosition(console, CursorPosition);
}
void setcursor(bool visible, DWORD size) {
     if(size == 0)
         size == 20;

     CONSOLE_CURSOR_INFO lpCursor;
     lpCursor.bVisible = visible;
     lpCursor.dwSize = size;
     SetConsoleCursorInfo(console,&lpCursor);     
}
void drawBorder(){
     
     for(int i=0; i<SCREEN_WIDTH; i++){
         gotoxy(i,SCREEN_HEIGHT); cout<<"+";
     } 

     for(int i=0; i<SCREEN_HEIGHT; i++){
         gotoxy(0,i); cout<<"+";
         gotoxy(SCREEN_WIDTH,i); cout<<"+";
     } 
     for(int i=0; i<SCREEN_HEIGHT; i++){
         gotoxy(WIN_WIDTH,i); cout<<"+";
     }
}
void genEnemy(int ind){
     enemyX[ind] = 3 + rand()%(WIN_WIDTH-10);
}
void drawEnemy(int ind){
     if(enemyFlag[ind] == true){
         gotoxy(enemyX[ind], enemyY[ind]); cout<<".**.";
         gotoxy(enemyX[ind], enemyY[ind]+1); cout<<"****";
         gotoxy(enemyX[ind], enemyY[ind]+2); cout<<"****";
         gotoxy(enemyX[ind], enemyY[ind]+3); cout<<".**.";

     } 
}
void killEnemy(int ind){
     if(enemyFlag[ind] == true){
         gotoxy(enemyX[ind], enemyY[ind]); cout<<"   ";
         gotoxy(enemyX[ind], enemyY[ind]+1); cout<<"   ";
         gotoxy(enemyX[ind], enemyY[ind]+2); cout<<"   ";
         gotoxy(enemyX[ind], enemyY[ind]+3); cout<<"   ";
     }
}
void resetEnemy(int ind){
     killEnemy(ind);
     enemyY[ind] = 4;
     genEnemy(ind); 
}
void genBullet(){
     bullets[pIndex][0] = 22;
     bullets[pIndex][1] = planePos;
     bullets[pIndex][2] = 22;
     bullets[pIndex][3] = planePos + 2;
     pIndex++;
     if(pIndex == 20)
         pIndex = 0;
}
void moveBullet(){
     for(int i=0; i<20; i++){
         if(bullets[i][0] > 2)
             bullets[i][0]--;
         else
             bullets[i][0] = 0;   

         if(bullets[i][2] > 2)
             bullets[i][2]--;
         else
             bullets[i][2] = 0;            
     }
}
void drawBullets(){
     for(int i=0; i<20; i++){
         if(bullets[i][0] > 1){
             gotoxy(bullets[i][1],bullets[i][0]); cout<<".";
             gotoxy(bullets[i][3],bullets[i][2]); cout<<".";
         }
     }
}
void killBullet(){
     for(int i=0; i<20; i++){
         if(bullets[i][0] >= 1){
             gotoxy(bullets[i][1],bullets[i][0]); cout<<" ";
             gotoxy(bullets[i][3],bullets[i][2]); cout<<"";
         }
     }
}
void killBullet(int i){
     gotoxy(bullets[i][1],bullets[i][0]); cout<<" ";
     gotoxy(bullets[i][3],bullets[i][2]); cout<<" ";
}
void drawPlane(){
     for(int i=0; i<3; i++){
         for(int j=0; j<5; j++){
             gotoxy(j+planePos, i+22); cout<<plane[i][j];
         }
     }
}
void killPlane(){
     for(int i=0; i<3; i++){
         for(int j=0; j<5; j++){
             gotoxy(j+planePos, i+22); cout<<" ";
         }
     }
}

int collision(){
     if(enemyY[0]+4 >= 23){
        if (enemyY[0]+4 >= 23){
             if(enemyX[0] + 4 - planePos >= 0 && enemyX[0] + 4 - planePos < 8){
                 return 1;
             }
        }
     }
     return 0;
}
int bulletHit(){
     for(int i=0; i<20; i++){
         for(int j=0; j<4; j+=2){
             if(bullets[i][j] != 0){
                 if(bullets[i][j] >= enemyY[0] && bullets[i][j] <= enemyY[0] + 4){
                     if(bullets[i][j+1] >= enemyX[0] && bullets[i][j] <= enemyX[0]+4)
                     killBullet(i);
                     bullets[i][j] = 0;
                     resetEnemy(0);
                     return 1;
                 }
             }
             if(bullets[i][j] >= enemyY[1] && bullets[i][j] <= enemyY[1] + 4){
                 if(bullets[i][j+1] >= enemyX[1] && bullets[i][j+1] <= enemyX[1]+4)
                     killBullet(i);
                     resetEnemy(1);
                     bullets[i][j] = 0;
                     return 1;
             }
         }
     }
     return 0;
     return 0;
}
void gameover(){
     system("cls");
     cout<<endl;
     cout<<"\t\t---------------"<<endl;
     cout<<"\t\t-----Гра закінчена-"<<endl;
     cout<<"\t\t---------------"<<endl<<endl;
     cout<<"\t\tНажміть любу кнопку щоб повернутися в меню.";
     getch();
}
void updateScore(){
     gotoxy(WIN_WIDTH + 7, 5);cout<<"Score: "<<score<<endl;
}

void instructions(){
     
     system("cls");
     cout<<"Інструкція";
     cout<<"\n-------------";
     cout<<"\n Натисніть пробіл,щоб можно було знищувати імперських пілотів";
     cout<<"\n \nНaтисніть любу кнопку щоб повернутися в меню";
     getch();
}

void play(){
     
     planePos = -1 + WIN_WIDTH / 2;
     score = 0;
     enemyFlag[0]  = 1;
     enemyFlag[1] = 1;
     enemyY[0] = enemyY[1] = 4;

     for(int i=0; i<20; i++){
         bullets[i][0] = bullets[i][1] = 0;
     }

     system("cls");
     drawBorder();
     genEnemy(0);
     genEnemy(1);
     updateScore();

     gotoxy(WIN_WIDTH + 5, 2);cout<<"StarWars";
     gotoxy(WIN_WIDTH + 6, 4);cout<<"-------------";
     gotoxy(WIN_WIDTH + 6, 6);cout<<"--------------";
     gotoxy(WIN_WIDTH + 7, 12);cout<<"╨Я╨░╨╜╨╡╨╗╤М ";
     gotoxy(WIN_WIDTH + 7, 13);cout<<"-------- ";
     gotoxy(WIN_WIDTH + 2, 14);cout<<"A тХитХСтХитХЬтХитХЫтХитФРтХитХСтХитЦС- ╨▓╨╗╤Ц╨";
     gotoxy(WIN_WIDTH + 2, 15);cout<<"D ╨║╨╜╨╛╨┐╨║╨░ - ╨▓╨┐╤А╨░╨▓╨╛";
     gotoxy(WIN_WIDTH + 2, 16);cout<<"╨┐╤А╨╛╨▒╤Ц╨╗ = ╤Б╤В╤А╤Ц╨╗╤П╤В╨╕";

     gotoxy(10, 5);cout<<"Press any button to start play";
     getch();
     gotoxy(10, 5);cout<<"                               ";

     while(1){
         if(kbhit()){
             char ch = getch();
             if(ch=='a' || ch=='A'){
                 if(planePos > 2)
                     planePos -= 2;
             }
             if(ch =='d' || ch=='D'){
                 if(planePos < WIN_WIDTH-7)
                     planePos += 2;  
             } 
             if(ch==32){
                 genBullet();
             }
             if(ch==27){
                 break;
             }
         }

         drawPlane();
         drawEnemy(0);
         drawEnemy(1);
         drawBullets();
         if(collision() == 1){
             gameover();
             return;
         } 
         if(bulletHit() == 1){
             score++;
             updateScore();
         } 
         Sleep(300);
         killPlane();
         killEnemy(0);   
         killEnemy(1);
         killBullet();
         moveBullet();

         if(enemyFlag[0] == 1)
             enemyY[0] += 1;

         if(enemyFlag[1] == 1)
             enemyY[1] += 1;

         if(enemyY[0] > SCREEN_HEIGHT-5){
             resetEnemy(0);
         }    
         if(enemyY[1] > SCREEN_HEIGHT-5){
             resetEnemy(1);
         }            
     }
    
}

int main()
{
     setcursor(0,0);
     srand( (unsigned)time(NULL));

     do{
         system("cls");
         gotoxy(10,5); cout<<"---------------";
         gotoxy(10,6); cout<<"|  StarWars    |";
         gotoxy(10,7); cout<<"-----------------";
         gotoxy(10,9); cout<<"1. Start this game";
         gotoxy(10,10); cout<<"2. Instruction how to play";
         gotoxy(10,11); cout<<"3. Quit a game";
         gotoxy(10,13); cout<<"4. Select option: ";
         char op = getch();


         if(op=='1') play();
         else if(op=='2') instructions();
         else if(op=='3') exit(0);
            
     }while(1);

     return 0;
}


