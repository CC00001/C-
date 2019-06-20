#include <iostream>
using namespace std;

bool stringCompare(char *s1, char *s2)
{
 if(strlen(*s1) != strlen(*s2))
 {
  return 1;
 while(*s1 != '\0' && *s2 != '\0')
 {
  if(*s1++ != *s2++)
  {
   return 1;
  }
  break;
  return 0;
  }
 }
}

int main()
{

const int MAX = 10;
char s1[MAX] = {"Albert"};
char s2[MAX] = {"Albert"};
bool isit = false;

stringCompare(s1, s2);

if(isit == true)
{
 cout << s1 << " is equal to " << s2 << endl;
}
else
{
 cout << s1 << " is NOT equal to " << s2 << endl;
} 
}
