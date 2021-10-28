#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
     int hr=0,min=0,sec=0;
     cout<<hr<<" : "<<min<<" : "<<sec<<endl;
     while(true){   // тут создаю незаканчиваемую петлюююююю
           system("cls"); 
           cout<<hr<<" : "<<min<<" : "<<sec<<endl;
           sec++;  
           if(sec==60){
                min++;
                sec=0;
                if(min==60){
                     hr++;
                     min=0;
                }
           }   
     } 
}
     
