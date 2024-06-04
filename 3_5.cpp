#include <iostream>
using namespace std;

int main()
{
    int a , b, c;
    cout<<"Enter the first side of the triangle :- ";
    cin>>a;
    cout<<"Enter the second side of the triangle :- ";
    cin>>b;
    cout<<"Enter the third side of the triangle :- ";
    cin>>c;

    if(a+b>c && b+c>a && a+c>b)
{
    if(a==b && b==c)
    {
        cout<<"The triangle is equilateral ";
    }
    else if((a==b && b!=c) || (b==c && c!=a) || (c==a) && a!=b )
    {
        cout<<"The triangle is isosceles ";
    }
    else{
        cout<<"the triangle is scalene";
    }

}
else{
    cout<<"The triangle is not formed";
}







    return 0;
}
