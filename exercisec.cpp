#include <iostream>
using namespace std;

void crazy(int &n, int b)
{
n = n + b;
}

int crazy(int n)
{
crazy(n, n);
return n;
}

int main()
{
int n = 15;
cout << crazy(++n) << endl;
}
