#include "iostream"
#include "string"
using namespace std;
int main()
{
     string b;

     cout << "Press y to open YOUTUBE => ";
     cout << "\nPress g to open GOOGLE => ";
     cout << "\nPress m to open Gmail => \n";

     getline(cin,b);

     if(b=="y")
     {
         system("start https://www.youtube.com/");
     }

     if(b=="g")
     {
         system("start https://www.google.com/webhp?client=firefox-b-d");
     }

     if(b=="m")
     {
         system("start https://mail.google.com/mail/u/0/?ogbl");
     }
     else
     {
         cout << "ERROR, You unfortunately do not enter right word";
     }


     return 0;
}     
