#include <iostream>
using namespace std;

int main()
{
    int initialV,acceleration,time,finalV;
    cout<<"Enter initial velocity: ";
    cin>>initialV;
    cout<<"Enter acceleration: ";
    cin>>acceleration;
    cout<<"Enter time: ";
    cin>>time;
    finalV=(acceleration*time)+initialV;
    cout<<"Final velocity: "<<finalV;
}