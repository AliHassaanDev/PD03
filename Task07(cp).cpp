#include <iostream>
using namespace std;

int main()
{
   string name;
   int priceA,priceC,soldA,soldC,charity,total,donation,remaining;
   cout<<"Enter the movie name: ";
   cin>>name;
   cout<<"Enter the adult ticket price: ";
   cin>>priceA;
   cout<<"Enter the child ticket price: ";
   cin>>priceC;
   cout<<"Enter the number of adult tickets sold: ";
   cin>>soldA;
   cout<<"Enter the number of child tickets sold: ";
   cin>>soldC;
   cout<<"Enter the percentage of the amount to be donated to charity: ";
   cin>>charity;
   total=(priceA*soldA)+(priceC*soldC) ;
   donation=total/10;
   remaining=total-donation;
   cout<<"Movie: "<<name<<endl;
   cout<<"Total amount generated from ticket sale: $"<<total<<endl;
   cout<<"Donation to charity("<<charity<<"): $"<<donation<<endl;
   cout<<"Remaining amount after donation: "<<remaining;

}  