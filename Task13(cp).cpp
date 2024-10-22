#include <iostream>
using namespace std;

int main()
{ 
    int num=0,sum=0;
    int i=0;
    while(i<5)
    {
     cout<<"Number: ";
     cin>>num;
     i++;
     sum=sum+num;
    }
    cout<<"sum is: "<<sum;
}