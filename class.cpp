#include <iostream>
using namespace std;

class Rectangle
{
 private:
 double width, length;

 public:
 void setwidth(double width);
 double getwidth() const
 {return width;}
 void setlength(double length);
 double getlength() const
 {return length;}
};

int main()
{
 Rectangle r;

 Rectangle::setwidth(double width)
 {
  w = width;
 }

 Rectangle::setlength(double length)
 {
  l = length;
 }

 r.setwidth(5);
 r.setlength(10);
 

 cout << "Width: " << r.getwidth() << endl;
 cout << "Length: " << r.getlength() << endl;
}
