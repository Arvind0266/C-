#include<iostream>
using namespace std;
class arvind
{
public:
int a,b,l,r,h;
double area;
void areasq()
{
    cout<<"Enter The Length of the side of square = ";
    cin>>a;
    cout<<"Area = "<<a*a<<endl;
}
void arearect(int l,int b)
{
cout<<"Area = "<<l*b<<endl;
}
int areatri()
{
    cout<<"Enter the base and height of triangle";
    cin>>b>>h;   
area=0.5*b*h;
return area;
}
double areacircle(int r)
{
    area=3.14*r*r;
    return area;
    }
};
    int main()
    {
        int l,b,r;
        arvind square,rectangle,triangle,circle;
        square.areasq();
        cout<<"Enter the length and breadth of rectangle = ";
        cin>>l>>b;
        rectangle.arearect(l,b);
       cout<<triangle.areatri();
        cout<<"Enter The Radius Of circle = ";
        cin>>r;
        cout<<circle.areacircle(r);
        return 0;
    }
