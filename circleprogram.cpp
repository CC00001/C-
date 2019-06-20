#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
 //Instantiation
 Circle myCircle;
 Circle *pmyCircle = NULL;
 pmyCircle = &myCircle;
 double x, y, r, xpoint, ypoint;

 //Key in values
 cout << "Enter X coordinate:";
 cin >> x;
 cout << "Enter Y coordinate:";
 cin >> y;
 cout << "Enter radius:";
 cin >> r;
 cout << "Enter xValue:";
 cin >> xpoint;
 cout << "Enter yValue:";
 cin >> ypoint;
 
 //Setting values inside functions
 pmyCircle->setX(x);
 pmyCircle->setY(y);
 pmyCircle->setRadius(r);

 cout << endl;
 cout << "X coordinate:" << pmyCircle->getX() << endl;
 cout << "Y coordinate:" << pmyCircle->getY() << endl;
 cout << "Radius is " << pmyCircle->getRadius() << endl;
 cout << "Area of circle is " << pmyCircle->getArea() << endl;
 cout << "X Value:" << xpoint << endl;
 cout << "Y Value:" << ypoint << endl;

 //Insert bool function
 bool within =  pmyCircle->containsPoint(xpoint, ypoint);
 if(within == true)
 {
  cout << "True" << endl;
 }
 else if(within == false)
 {
  cout << "False" << endl;
 }
 return 0;
}


/*
---------------Output---------------- 
[wwu12@hills ~]$ ./a.out 
Enter X coordinate:2.0 
Enter Y coordinate:3.0 
Enter radius:2.0 
Enter xValue:2.0 
Enter yValue:4.0 

X coordinate:2 
Y coordinate:3 
Radius is 2 
Area of circle is 12.56 
X Value:2 
Y Value:4 
True 
[wwu12@hills ~]$ ./a.out 
Enter X coordinate:2.0 
Enter Y coordinate:3.0 
Enter radius:2.0 
Enter xValue:2.0 
Enter yValue:10.0
 
X coordinate:2 
Y coordinate:3 
Radius is 2 
Area of circle is 12.56 
X Value:2 
Y Value:10 
False
[wwu12@hills ~]$
-----------------------------*/
