#include <iostream>
using namespace std;

int main()
{ 
    string name;
    int target,days;
    cout<<"Enter the name of person: ";
    cin>>name;
    cout<<"Enter the target weight loss in kilograms: ";
    cin>>target;
    days=target*15;
    cout<<name<<" will need "<<days<<" days to lose "<<target<<"kg of weight by following the doctor's suggestion";

}