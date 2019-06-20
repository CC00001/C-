#include <iostream>
using namespace std;

int main()
{
 
 for(int i = 0; i < 10; i++)
 {
  for(int j = 0; j < i; j++)
  {
   cout << "*";
  }
  cout << "*" << endl;
 }

 for(int i = 0; i < 10; i++)
 {
  for(int j = 10; j > i; j--)
  {
   cout << " ";
  }
  for(int k = 0; k < i; k++)
  {
   cout << "*";
  }
  cout << endl;
 }
  cout << endl;

 for(int i = 0; i < 11; i++)
 {
  cout << "-";
 }
 cout << endl;

 for(int i = 10; i > 1; i--)
 {
  for(int j = 2; j < i; j++)
  {
   cout << "*";
  }
  cout << "*" << endl;
 }
  cout << endl;

 for(int i = 10; i > 0; i--)
 {
  for(int j = 10; j > i; j--)
  {
   cout << " ";
  }
  for(int k = 0; k < i; k++)
  {
   cout << "*";
  }
   cout << endl;
 }
  cout << endl;
return 0;
}
