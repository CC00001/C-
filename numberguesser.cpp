#include <iostream>
using namespace std;

void asking(int &guess) /*create a function for a repeating string.*/ 
{
  cout << "Is it " << guess << " ?(h/l/c):";
}

int getMidpoint(int &low, int &high) /*create a function for caluate Midpoint of two number*/ 
{
   int mid;
   mid = ((high - low)/2) + low;
   return mid;
}
char getUserResponseToGuess(int &guess) /*Function for asking player's selection.*/ 
{
  int low = 0;
  int high = 100;
  int GUESS, MID, HIGH, LOW;
  bool correct = false;
  char selection = 'h' || 'l' || 'c';
    
     MID = getMidpoint(low, high);
     cout << "Is it " << MID << "? (h/l/c):";
     cin >> selection;
      
        if(selection == 'h')
        {
         LOW = MID;
         guess = getMidpoint(LOW, high);
         asking(guess);
         cin >> selection;
             while(selection == 'h')
             {
               LOW = guess + 1;
               guess = getMidpoint(LOW, high);
               asking(guess);
               cin >> selection;
             }
             while(selection == 'l')
             {
                HIGH = guess - 1;
                guess = getMidpoint(LOW, HIGH);
                asking(guess);
                cin >> selection;
              }
         }    
         else if(selection == 'l')
         {
           HIGH = MID;
           guess = getMidpoint(low, HIGH);
           asking(guess);
           cin >> selection;
              while(selection == 'h')
              {
                LOW = guess;
                guess = getMidpoint(LOW, HIGH);
                asking(guess);
                cin >> selection;
              }
              while(selection == 'l')
              {
                HIGH = guess - 1;
                guess = getMidpoint(low, HIGH);
                asking(guess);
                cin >> selection;
              }
         }
         else if(selection == 'c')
         {
           return 0;
         }
    
}

bool shouldPlayAgain() /*Function for asking play again.*/ 
{
  char select = 'y' || 'n';
  cout << "Great! Do you want to play again?(y/n):";
  cin >> select;
    if(select == 'n')
    {
      return 0;
    }
}

void playOneGame() /*Start up funcion for running a game.*/ 
{
  int guess;
  cout << "Think of a number between 1 and 100." << endl;
  getUserResponseToGuess(guess);
}

int main() 
{  
  do
  {
    playOneGame();
  }while(shouldPlayAgain());
  return 0;
}
