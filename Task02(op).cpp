#include <iostream>
using namespace std;

int main()
{
    int minutes;
    int frames;
    int number;
    cout<<"Enter number of minutes: ";
    cin>>minutes;
    cout<<"Enter frames per second: ";
    cin>>frames;
    number=(frames*60)*minutes;
    cout<<"Total number of frames: "<<number;

}