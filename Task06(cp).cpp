#include <iostream>
using namespace std;

int main()
{
    int size,cost,area,costPerPound,costPerSqFoot;
    cout<<"Enter the size of fertilizer bag in pounds: ";
    cin>>size;
    cout<<"Enter the cost of the bag: ";
    cin>>cost;
    cout<<"Enter the area in sq feet that can be covered by the bag: ";
    cin>>area;
    costPerPound=cost/size;
    costPerSqFoot=cost/area;
    cout<<"Cost of fertilizer per pound: "<<costPerPound<<endl;
    cout<<"Cost of fertilizer per square foot: "<<costPerSqFoot;
}