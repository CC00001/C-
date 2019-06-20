#include <iostream>
#include <iomanip>
using namespace std;


float toCeluis(float fFah)
{
return 5.0/9.0 * (fFah - 32);
}

int main()
{
for(float fFah = 60.0; fFah = 80.0; fFah = fFah * 1.0)
cout << toCeluis(fFah) << endl;

return 0;
}


