#include <iostream>
using namespace std;

int main()
{
    int cir , area ,no;
    cout<<"Enter the number : - ";
    cin>>no;
    cir = 2*3.14*no;
    area = 3.14*no *no;
    if(area>cir)
    {
        cout<<"The area is greater than the circumference ";
    }
    else 
    {
        cout<<"the circumference is greater than area ";
    }
    return 0;
}