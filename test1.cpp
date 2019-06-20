#include <iostream>
using namespace std;

int main()
{
int num;
int grade;
int sum;
float average;

cout << "How many assignments you have?" << endl;
cin >> num;

for(int i = 0; i < num; i++)
{

cout << "what is the socre for " << i << " ?" << endl;
cin >> grade;

sum += grade;
average = sum / num;

}

cout << "Sum is: " << sum << endl;
cout << "Average is: " << average << endl;

 
return 0;
}
