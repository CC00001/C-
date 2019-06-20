#include <iostream>
using namespace std;

int main()
{
int score1,score2;

char x = 'y';

for(x = 'y';  x == 'y';)
{
cout << "what the score of team 1?" << endl;
cin >> score1;

cout << "What the score of team 2?" << endl;
cin >> score2;

if( score1 > score2)
{
cout << "Team 1 win!" << endl;
}
else if(score1 < score2)
{
cout << "Team 2 win!" << endl;
}
else 
{
cout << "tie" << endl;
}
cout << "Want to go agin?" << endl;
cin >> x;
}



return 0;


}
