#include <iostream>
#include <cstring>
using namespace std;

void nameSlice(char *s)
{
 while(*s != '\0')
 {
  if(isspace(*s))
  {
   *s = '\0';
  }
  s++;
 }
}

 /* void nameSlice(char *s) //OR
   {
    for(int i = 0; s[i] != '\0'; i++)
    {
     if(isspace(*s))
     {
      s[i] = '0';
     }
    }
   }
*/

int main()
{
 const int MAX_CHARS = 128;
 char name[MAX_CHARS];
 cout << "what is your first and last name, separated by a space?\n";
 cin.getline(name, MAX_CHARS);
 nameSlice(name);
 cout << "Your first name is " << name << endl;
}
