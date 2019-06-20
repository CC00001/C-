#include <iostream>
using namespace std;

void reverseWords(char *s, string &str, int size) // reversewords, not finish yet
{
 char temp;
 int start = 0, end = 0;

 for(int i = 0; s[i] != '\0'; i++)
 {
  if(isspace(*s))
  {
   i++;
   str = s[i];
  }
 }
}

/*int findSubstring(char *s, char substring[], int &index)
{
 for(int i = 0; s[i] != '\0'; i++)
 {
   if(*s.find(substring[i]))
  {
   index = i;
  }
 }
}*/

bool isPalindrome(char *s, bool &isit) // bool for Palindrome
{
 isit = false; 
 for(int i = 0; s[i] != '\0'; i++)
 {
  for(int j = i - 1; s[j] != '\0'; j--)
  {
   if(s[i] == s[j])
   {
    isit = true;
   }
   else
   {
    isit = false;
   }
  }  
 }
}

int replace(char *s, char target, char replacementChar, int &times) //replace targeted char
{
 for(int i = 0; s[i] != '\0'; i++)
 {
  if(target == s[i])
  {
    s[i] = replacementChar;
    times++;
  }
 }
}

void reverse(char *s) // reverse char
{
 char temp;
 int start = 0, end = 0;
 while(s[end] != '\0')
 {
  end++;
 }
   end = end - 1;
   while(start < end)
   {
    temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    start++;
    end--;
  }
}

int lastIndexOf(char *s, char target, int &index) //counting index of char
{
  for(int i = 0; s[i] != '\0'; i++)
  {
   if(target == s[i])
   {
    index = i;
   } 
  }
 return index;
}

int main()
{
  int size = 20;
  int index = -1, times = 0;
  char words[size];
  char substring[size];
  char target, replacement; 
  bool isPal = false;
  string str;
  
  cout << "Enter a word: ";
  cin.getline(words, size);
  reverseWords(words, str, size);
  cout << str << endl;

  /*cout << "Enter substring: ";
  cin.getline(substring, size);

  findSubstring(words, substring, index);
  cout << "Substring is " << index << endl;*/
  
  //cout << "enter a char: ";
  //cin >> target;

  /*lastIndexOf(words, target, index);
  cout << "At index of " << index << endl;
  cout << "Enter replacement char: ";
  cin >> replacement;*/
 
  /*reverse(words);
  cout << words << endl;*/
  
  /*replace(words, target, replacement, times);
  cout << words << endl;
  cout << times << " times." << endl;*/

  /*isPalindrome(words, isPal);
  if(isPal == true)
  {
   cout << "It is Palindrome." << endl;
  }
  else if(isPal == false)
  {
   cout << "It is not." << endl;
  }*/

  
}
