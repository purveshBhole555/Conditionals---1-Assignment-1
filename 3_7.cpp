#include <iostream>
using namespace std;

int main()
{
    float x,y ;
    cout<<"Enter the two numbers : ";
    cin>>x>>y;

    if(x==0 && y==0)
    {
        cout<<"the point is on origin ";
    }
    else if (y==0 && x!=0)
    {
        cout<<"the point is on x axis ";
    }
    else if (x==0 && y!=0)
    {
        cout<<"the point is on y axis ";
    }
    else
    {
        cout<<"Random point ";
    }



    return 0;
}
