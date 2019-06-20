#include <iostream>
using namespace std;

struct Address
{
 char sStreet[255];
 char sCity[255];
};

struct Student
{
 char sName[255];
 Address address;
 int nAge;
};

void initializeData(Student *pStudents, int size) // Collecting info from user input
{
 for(int i = 0; i < size; i++)
 {
  cin.ignore();
  cout << "Enter student name: ";
  cin.getline((pStudents + i)->sName, 255);
  cin.ignore(0);
  cout << "Enter street: ";
  cin.getline((pStudents + i)->address.sStreet, 255);
  cin.ignore(0);
  cout << "Enter city: ";
  cin.getline((pStudents + i)->address.sCity, 255);
  cin.ignore(0);
  cout << "Enter age: ";
  cin >> (pStudents + i)->nAge;
 }
}

void sortData(Student *pStudents, int size) // sort info from youngest to oldest
{
 for(int i = 0; i < size - 1; i++)
 {
  int youngest = (pStudents + i)->nAge;
  int position = i;
  string name = (pStudents + i)->sName;
  string street = (pStudents + i)->address.sStreet;
  string city = (pStudents + i)->address.sCity;
  
  for(int j = i + 1; j < size; j++)
  {
   if(youngest > (pStudents + j)->nAge)
   {
    youngest = (pStudents + j)->nAge;
    position = j;
    name = (pStudents + j)->sName;
    street = (pStudents + j)->address.sStreet;
    city = (pStudents + j)->address.sCity;
   }
  }
  swap((pStudents + i)->sName, (pStudents +({position;}))->sName);
  swap((pStudents + i)->nAge, (pStudents + ({position;}))->nAge);
  swap((pStudents + i)->address.sStreet, (pStudents + ({position;}))->address.sStreet);
  swap((pStudents + i)->address.sCity, (pStudents + ({position;}))->address.sCity);
 }
}

void displayData(Student *pStudents, int size) // Display output
{
 for(int i = 0; i < size; i++)
 {
  cout << (pStudents + i)->sName << " ," << (pStudents + i)->address.sStreet << " ," << (pStudents + i)->address.sCity << " , Age: " << (pStudents + i)->nAge << endl;
 }
}

int main()
{
 int sNUM;
 Student *pnew = new Student[sNUM];
 int total, average;

 cout << "How many students do you want: ";
 cin >> sNUM;
 
 initializeData(pnew, sNUM);
 sortData(pnew, sNUM);
 displayData(pnew, sNUM);

 //Caluating average age
 for(int i = 0; i < sNUM; i++)
 {
  total += (pnew + i)->nAge;
  average = total / sNUM;
 }

 cout << "Average age is " << average << "." << endl;
}
