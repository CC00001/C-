#include <iostream>
#include "circle.h"
#include <cmath>
using namespace std;

void Circle::setX(double x)//Define x coordinate value
{
 xcoordinate = x;
}

void Circle::setY(double y)//Define y coordinate value
{
 ycoordinate = y;
}

void Circle::setRadius(double r)//Define Radius value
{
 radius = r;
}

double Circle::getArea()//Geting circle area
{
 double area = pi * pow(radius, 2.0);
}

bool Circle::containsPoint(double xValue, double yValue)//Bool function return true or false
{
 double x = xValue - xcoordinate;
 double y = yValue - ycoordinate;
 double distance = sqrt(pow(x, 2.0) + pow(y, 2.0));

 if(distance <= radius)
 {
  return true;
 }
 else 
 {
  return false;
 }
 exit(1);
}
