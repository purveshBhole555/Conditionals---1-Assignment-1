#include <iostream>
using namespace std;

int main()
{
    int x1 , x2, x3 , y1,y2, y3, slope1 , slope2;

    cout<<"enter the first point";
    cin>>x1>>y1; 
    cout<<"enter the second point";
    cin>>x2>>y2; 
    cout<<"enter the third point";
    cin>>x3>>y3; 
    slope1 = (y2-y1)/(x2-x1);
    slope2 = (y3-y2)/(x3-x1);

    if(slope1==slope2)
    {
        cout<<"they are in one line";
    }
    else
    {
        cout<<"They are not in same line ";
    }
    
    return 0;
}
