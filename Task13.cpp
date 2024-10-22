#include<iostream>
using namespace std;

main()
{
    int num=0,sum=0,i=0;
    for(i=0;i<5;i=i+1)
    {
      cout<<"Number: ";
      cin>>num;
      sum=sum+num;
    }
    cout<<"Sum is: "<<sum;
}