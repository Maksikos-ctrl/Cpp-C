#include<iostream>
#include<conio.h>

using namespace std;

void calculatorBMI() {
     
     system("cls");

     double weight;
     double height;

     cout<<endl<<endl;
     cout << "Enter your weight (in kilograms): "; // введи скільки ти важиш в кілограмммах
     cin >> weight;

     cout << "Enter your height (in meters): "; // введи свій зріст,не пісюна,а твій зріст!!!
     cin >> height;

     double bmi = weight / (height * height);

     cout<<endl<<endl;
     cout<<"-----------------------------------"<<endl;
     cout << "Your body mass index " << bmi << endl; //  індекс маси тіла

     cout<<"------------------------------------"<<endl;
     if(bmi < 18.5)
         cout << "You are underweight"; // ти худий
     else if (bmi >= 18.5 && bmi <= 25) 
         cout << "You are healthy enough"; // ніфіга,в тебе все норм
     else if (bmi > 25)
         cout << "You weigh more than you need for your age"; // У тебя як у Порядина
     cout<<endl<<"------------------------------------";

     cout<<"\n\nClick on any button to return to the Menu ..."; // Тут додумайся сам
     getch();
        
}

void instruction(){
     
     system("cls");
     cout<<"Instruction";
     cout<<"\n-------------";
     cout<<"\n BMI less than normal weight: You are underweight"; // Ти худий як Балаш
     cout<<"\n BMI between normal weight (inclusive): You have normal weight "; // Все чотко
     cout<<"\n BMI more than normal weight: You are overweight";  // Ти ПОрядинннннннннннн
     cout<<"\n Click on any button to return to the Menu"; //
     getch();
}

int main()
{
     do{
         system("cls");
         cout<<" -------------------------------------------------- "<<endl;//
         cout<<" |             BMI calculator                 | "<<endl;
         cout<<" -------------------------------------------------- "<<endl;
         cout<<"1. Calculator BMI"<<endl; // перейти до калькулятора
         cout<<"2. Terms of use BMI"<<endl; // Правила використання
         cout<<"3. Leave"<<endl<<endl; // покинути
         cout<<"Choose the option: ";
         char op = getche();

         if(op=='1') calculatorBMI();
         else if( op=='2') instruction();
         else if( op=='3') exit(0);

     }while(1);

     return 0;  
}

