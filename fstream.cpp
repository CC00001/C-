#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ifstream inputfile;
inputfile.open("passwords.txt");

if(!inputfile)
{
 exit(1);
 cout << "File doesn't exit!" << endl;
}
int NUMBERS[20];
int passwords;
int input;

inputfile >> passwords;
cout << passwords << endl;

/*cout << "Enter passwords:";
cin >> input;

   for(int i = 0; i < 20; i++)
   {     
     input = NUMBERS[i];
     if(NUMBERS[i] == passwords)
     {
       cout << NUMBERS[i];

     }

   }

cout << passwords << endl;*/

return 0;


}
