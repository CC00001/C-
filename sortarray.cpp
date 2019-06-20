#include <iostream>
using namespace std;

void displayData(int grade[], string names[], int size, int &count) // Print out sort result
{
 for(int i = 0; i < size; i++)
 {
  cout << names[i] << ": " << grade[i] << endl;
 }
  cout << "Swapped " << count << " times." << endl;
}
 
void initializeArrays(int grade[], string names[], int size) // Initialize Arrays
{
 for(int i = 0; i < size; i++)
 {
  cout << "Enter names: ";
  getline(cin, names[i]);
  cout << "Grade(from 0 to 100): ";
  cin >> grade[i];
  cin.ignore();
 }
 cout << endl;
}

int sortDataSelection(int array[], string names[], int size, int &count) // Sort grade from Lowest to Highest
{
 for(int i = 0; i < size - 1; i++)
 {
  int lowest = array[i];
  string low = names[i];
  int position = i;

  for(int j = i + 1; j < size; j++)
  {
   if(array[j] < lowest)
   {
     lowest = array[j];
     low = names[j];
     position = j;
   }
  }
  swap(array[i], array[position]);
  swap(names[i], names[position]);
  count++;
 }
 return count;
}

int sortDataBubble(int array[], string names[], int size, int &count) // Sort using Bubble sort from Lowest to Highest
{
 bool swapped = false;
 do
 {
  for(int i = 0; i < size - 1; i++)
  {
   swapped = false;
    if(array[i] > array[i+1])
    {
     swap(array[i], array[i+1]);
     swap(names[i], names[i+1]);
     swapped = true;
    }
   count++;
  }
 }while(swapped);
  return count;
}

string sortDataSelectionAlph(string names[], int array[], int size, int &count) // Sort using selection sort students names alphabetically
{
 for(int i = 0; i < size - 1; i++)
 {
  string beginning = names[i];
  int grade = array[i];
  int position = i;
  for(int j = i + 1; j < size; j++)
  {
   if(names[j] < beginning)
   {
    beginning = names[j];
    grade = array[j];
    position = j;
   }
  }
  swap(names[i], names[position]);
  swap(array[i], array[position]);
  //count++;
 }
 //return count;
}

int main()
{
  const int NUM = 5;
  string names[NUM];
  int grade[NUM];
  int count = 0;
  
  //ALl Functions
  initializeArrays(grade, names, NUM);
  sortDataSelection(grade, names, NUM, count);
  sortDataBubble(grade, names, NUM, count);
  //sortDataSelectionAlph(names, grade, NUM, count);
  displayData(grade, names, NUM, count);
}
