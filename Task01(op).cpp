#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number of sides of polygon: ";
    cin>>number;
    int sum;
    sum=(number-2)*180;
    cout<<"Sum of internal angle of"<<number<<"-sided polygon: "<<sum;
}