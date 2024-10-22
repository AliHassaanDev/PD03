#include <iostream>
using namespace std;

int main()
{
    int num,digit4,digit3,digit2,digit1,x,y,sum;
   cout<<"Enter a 4-digit number: ";
   cin>>num;
   digit4=num%10;
   x=num/10;
   digit3=x%10;
   y=x/10;
   digit2=y%10;
   digit1=y/10;
   sum=digit1+digit2+digit3+digit4;
   cout<<sum;
}
