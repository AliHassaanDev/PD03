#include <iostream>
using namespace std;

int main()
{
    int area,width,len,walls;
    cout<<"Number of square meters you can print: ";
    cin>>area;
    cout<<"Width of single wall(in meters): ";
    cin>>width;
    cout<<"Length of a single wall(in meters): ";
    cin>>len;
    walls=area/(width*len);
    cout<<"Number of walls you can print: "<<walls;
}