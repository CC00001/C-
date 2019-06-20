#include <iostream>
#include <iomanip>
using namespace std;


bool toCeluisByReference(float &fFah)
{
5.0/9.0 * (fFah - 32);

if(fFah > 30)
{
return ture;
}

}

int main()
{
for(float fFah = 60.0; fFah = 80.0; fFah = fFah * 1.0)
cout << toCeluisByReference() << endl;

return 0;
}


