#include <iostream>
using namespace std;

void swap(int *x, int *y) // Function to swap two intergers that the pointers point to.
{
 swap(*x, *y);
}

void noNegatives(int *x) //Function to set negative integers to zero.
{
 if(*x < 0)
 {
  *x = 0;
 }
}

int main()
{
 int x, y; // Create two integers.
 int *p1 = &x; // stre the address of x in p1.
 *p1 = 99; // p1 set the vallue of x to 99.
 

 cout << x << endl; //cout x, display the value of x
 cout << *p1 << endl; // cout the p1, display the value of x.

 p1 = &y; // store the address of y into p1.
 *p1 = -300; // p1 set the value of y to -300.

 cout << "x:" << x << " " << "y:" << y << endl;

 // create two variables 
 int temp = *p1;
 int *p2 = &y;
 *p2 = temp;
 p1 = &x;
 
 //using temp, p1 and p2 to swap the values in x and y.
 swap(*p1, *p2); // swap the vaule of x and y.
 cout << "x:" << x << " " << "y:" << y << endl;

 noNegatives(&x);
 noNegatives(&y);
 cout << "x: " << x << " " << "y: " << y << endl;

 p2 = &x;
 cout << "x: " << *p2 << " ";
 p2 = &y;
 cout << "y: " << *p2 << endl;

 //create an array called 'a'
 const int SIZE = 2;
 int a[SIZE];
 p2 = &a[0]; //using p2 to initalize the frst element of a with the value of x.
 *p2 = x; 
 p2 = &a[1]; // using p2 to initalize the second element of a with the value of y
 *p2 = y;

 //cout the first and second elements of value of x and y.
 cout << "First element address: " << &a[0] << endl;
 cout << "Second element address: " << &a[1] << endl;

 //using p1, p2 and temp the swap the value s in two elements of array 'a'.
 p1 = &a[0];
 temp = a[0];
 *p1 = temp;
 p2 = &a[1];
 swap(*p1, *p2);

 //Dispplay the values of the two elements.
 cout << "First element: " << a[0] << endl;
 cout << "Second element: " << a[1] << endl;

 
 swap(&x, &y); //Swap the address of x and y 
 swap(&a[0], &a[1]); //Swap the address of the two elements in array 'a'.

 
 cout << "x: " << x << " " << "y: " << y << endl; // print the value x and y.
 cout << "a[0]: " << a[0] << " " << "a[1]: " << a[1] << endl; //print the values of two elements.

}

