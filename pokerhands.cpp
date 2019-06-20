#include <iostream>
using namespace std;

bool containsPair(int hand[], int size, bool &bPair) //Function for 1 Pair!
{
  bPair = false;
  int temp;
  int counter = 0;
  for(int i = 0; i < size; i++)
  {
   temp = hand[i];
    for(int j = i + 1; j < size; j++)
    {
      if(hand[j] == temp)
      { 
        counter++;
        if(counter = 2)
        {
          bPair = true;
          return bPair;
        }
        else
        {
        bPair = false;
        return bPair;
        }
      }  
     }
  }  
}

bool containsTwoPair(int hand[],int size, bool &twoPair) //Function for 2 Pairs!
{
  twoPair = false;
  int first, second;
  bool firstpair = false;
  bool secondpair = false;
  int counter1 = 0;
  int counter2 = 0;

  for(int i = 0; i < size; i++)
  {
   first = hand[i];
   for(int j = i + 1; j < size; j++)
   {
    if(hand[j] == first)
    {
     counter1++;
      if(counter1 = 2)
      {
       firstpair = true;      
      }
      else 
      {
       firstpair = false;
      }    
    
      for(int k = i + 1; k < size; k++)
      {
        second = hand[k];
        for(int l = k + 1; l < size; l++)
        {
         if(hand[l] == second)
         { 
           counter2++;
           if(counter2 = 2)
           {
            secondpair = true;
           }
           else
           {
            secondpair = false;
           }
         }
        }
      }
    }
   }
  }
       if(firstpair == true && secondpair == true)
       {
         twoPair = true;
         return twoPair;
       }
       else
       {
         twoPair = false;
         return twoPair;
       }
  
}

bool containsThreeOfaKind(int hand[], int size, bool &threeKind) //Function for 3 same cards!
{
threeKind = false;
int temp;
int counter = 0;

  for(int i = 0; i < size; i++)
  { 
   temp = hand[i];
   for(int j = i + 1; j < size; j++)
   {
    if(hand[j] == temp)
    {
     counter++;
     temp = hand[j];
      for(int k = j + 1; k < size; k++)
      {
       if(hand[k] == temp)
       {
        counter++;
        if(counter = 3)
        {
         threeKind = true;
         return threeKind;
        } 
        else
        {
         threeKind = false;
         return threeKind;
        }
       }
      }
    }
   }
  }
}

bool containsStraight(int hand[], int size, bool &Straight) //Function for cards arragned in order!
{
Straight = false;

  for(int i = 0; i < size; i++)
  {
   for(int j = i + 1; j < size; j++)
   {
    if(hand[j] == hand[i] + 1)  
    {
     Straight = true;
     return Straight;
    }
    else
    {
     Straight = false;
     return Straight;
    } 
   }
 }
}

bool containsFullHouse(int hand[], int size, bool &fullHouse) //Function for 3 same cards and 1 pair at the same time!
{
fullHouse = false;
bool threeKind = false;
bool bPair = false;
int temp, pair;
int counter1 = 0;
int counter2 = 0;

  for(int i = 0; i < size; i++)
  {
   temp = hand[i];
   for(int j = i + 1; j < size; j++)
   {
    if(hand[j] == temp)
    {
     counter1++;
     temp = hand[j];
     for(int k = j + 1; k < size; k++)
     {
      if(hand[k] == temp)
      {
       counter1++;
       temp = hand[k];
       if(counter1 = 3)
       {
        threeKind = true;
       }
       else
       {
        threeKind = false;
       }
        
       for(int m = 0; m < size; m++)
       {
        if(hand[m] != temp)
        {
          pair = hand[m];
          for(int n = m + 1; n < size; n++)
          {
           if(hand[n] == pair)
           {
            counter2++;
            if(counter2 = 2)
            {
             bPair = true;
            }
            else 
            {
             bPair = false;
            }
           }
          }
        }    
       }
      }      
     } 
    }  
   }
  
 }

  if(threeKind == true && bPair == true)
  {
   fullHouse = true;
   return fullHouse;
  }
  else
  {
   fullHouse = false;
   return fullHouse;
  }    
}

bool containsFourOfaKind(int hand[], int size, bool &fourKind) //Function for 4 cards at the same time!
{
fourKind = false;
int temp;
int counter = 0;

  for(int i = 0; i < size; i++)
  {
   temp = hand[i];
   for(int j = i + 1; j < size; j++)
   {
    if(hand[j] == temp)
    {
     counter++;
     temp = hand[j];
     for(int k = j + 1; k < size; k++)
     {
      if(hand[k] == temp)
      {
       counter++;
       temp = hand[k];
       for(int l = k + 1; l < size; l++)
       {
        if(hand[l] == temp)
        {
         counter++;
         if(counter = 4)
         {
          fourKind = true;
          return true;
         }
         else
         {
          fourKind = false;
          return fourKind;
         }
        }
       }
      }
     }
    }
   }
  }
}
int main()
{
char choice = 'c' || 'q';
const int NUM = 5;
int cards[NUM] = {1, 2, 3, 4, 5};
int hand[NUM];
bool bPair = false;
bool twoPair = false;
bool threeKind = false;
bool Straight = false;
bool fullHouse = false;
bool fourKind = false;
   

     for(int row = 0; row < 21; row++)
     {
      cout << "*" << " ";
     }
      cout << endl;
      cout << "*" << "                Welcome !              " << "*";
      cout << endl;

      for(int col = 0; col < 5; col++)
      {
        for(int j = 0; j < 1; j++)
        {
          cout << "*";
        }
        for(int i = 0; i < 39; i++)
        {
          cout << " ";
        }
        cout << "*" << endl;
      }
     for(int row = 0; row < 21; row++)
     {
       cout << "*" << " ";
     }
     cout << endl;
  
  //Starting asking user for entering 5 numbers within 2 - 9!
  
  do
  { 
    cout << "Enter five numeric cards, no face cards. Use 2 - 9." << endl;
   
    for(int i = 0; i < NUM; i++)
    {
      cout << "Card " << cards[i] << ":";
      cin >> hand[i];
      if(hand[i] < 2 || hand[i] > 9)
      {
        return main();
      } 
    }
       //Calling all functions!

       containsFourOfaKind(hand, NUM, fourKind);
       containsFullHouse(hand, NUM, fullHouse);
       containsStraight(hand, NUM, Straight);   
       containsThreeOfaKind(hand, NUM, threeKind);
       containsTwoPair(hand, NUM, twoPair);
       containsPair(hand, NUM, bPair);
       
       if(fullHouse == true)
       {
         cout << "Full House!" << endl;
       }  
       else if(fourKind == true)
       {
         cout << "Four Of a Kind!" << endl;
       }
       else if(threeKind == true)
       {
         cout << "Three Of a Kind!" << endl;
       }
       else if(twoPair == true)
       {
         cout << "Two Pair!" << endl;
       }
       else if(bPair == true)
       {
         cout << "Pair!" << endl;
       }
       else if(Straight == true)
       {
         cout << "Straight!" << endl;
       }
       else
       {
        cout << "High hand!" << endl;
       }
        
       //Asking if play again?
       
       cout << "Do you want to continue?('c' or 'q'):";
       cin >> choice;
       if(choice == 'q')
       {  
         break;
       }
  }while(choice == 'c');
     return 0;
}
