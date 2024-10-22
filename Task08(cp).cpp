#include <iostream>
using namespace std;

int main()
{
    float priceV,priceF;
    int kgV,kgF,total;
    cout<<"Enter vegetable price per kilogram(in coins): ";
    cin>>priceV;
    cout<<"Enter fruit price per kilogram(in coins): ";
    cin>>priceF;
    cout<<"Enter total kilograms of vegetables: ";
    cin>>kgV;
    cout<<"Enter total kilograms of fruits: ";
    cin>>kgF;
    total=(priceV*kgV)*0.52+(priceF*kgF)*0.52;
    cout<<total;
}