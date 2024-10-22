#include <iostream>
using namespace std;

int main()
{
    float imposter,player;
    float chance;
    cout<<"Enter imposter count: ";
    cin>>imposter;
    cout<<"Enter player count: ";
    cin>>player;
    chance= (imposter/player)*100;
    cout<<"Chance of being imposter: "<<chance<<"%";
}