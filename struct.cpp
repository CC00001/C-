#include <iostream>
using namespace std;

struct cost
{
 float wholesale;
 float retail;
};

struct salesrecord
{
 string burritotype;
 int numsold;
 cost price;
 float unitprofit, totalprofit;
};

float getProfit(salesrecord record)
{
 record.unitprofit = record.price.retail - record.price.wholesale;
 return record.unitprofit;

 record.totalprofit = record.unitprofit * record.numsold;
 return record.totalprofit; 
}

int main()
{
 int type;
 salesrecord record;
 salesrecord unittotal, totalprofit;
 salesrecord *parray  = new salesrecord[type];
 
 cout << "How many burritos type?" << endl;
 cin >> type;

 for(int i = 0; i < type; i++)
 {
  cout << "Type of burritos: ";
  cin >> (parray + i)->burritotype;
  cout << "How many sold: ";
  cin >> (parray + i)->numsold;
  cout << "How much wholesale? ";
  cin >> (parray + i)->price.wholesale;
  cout << "How much for retail? ";
  cin >> (parray + i)->price.retail;
 }

 /*for(int i = 0; i < type; i++)
 {
  getProfit(record);
  cout << (parray + i)->unitprofit << endl;
  cout << (parray + i)->totalprofit << endl;
 }*/

 
}
