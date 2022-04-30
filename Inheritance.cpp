#include<iostream>
#include<cmath>
using namespace std;
class Simple_Calculator
{
    protected:
    int num1,num2;
    public:
    void setdata(int a,int b)
{
    num1=a;
    num2=b;
}
void add()
{
cout<<"The Sum of two number is  "<<num1+num2<<endl;
}
void substract()
{
cout<<"The substract of two number is  "<<num1-num2<<endl;
}
void multiply()
{
cout<<"The multiply of two number is  "<<num1*num2<<endl;
}
void divide()
{
cout<<"The divide of two number is  "<<num1/num2<<endl;
}
void display()
{
    add();
    substract();
    multiply();
    divide();    
}
};

class Scientific_Calculator:virtual public Simple_Calculator
{
    public:
void remainder()
{
cout<<"The Remainder of two number is  "<<num1%num2<<endl;
}
void squareroot()
{
cout<<"The Squareroot of 1st  number is  "<<sqrt(num1)<<endl;
cout<<"The Squareroot of 2nd  number is  "<<sqrt(num2)<<endl;
}
void square()
{
cout<<"The square of two number is  "<<pow(num1,num2)<<endl;
}

void display2()
{
    remainder();
    square();
    squareroot();    
}
};
class Hybrid_Calcultor:virtual public Simple_Calculator,Scientific_Calculator
{
    public:
void display3()
{int A,B;
    cout<<"Enter Two Numbers= "<<endl;
    cin>>A>>B;
    setdata(A,B);
    display();
    display2();
    
}

};
int main()
{
Hybrid_Calcultor Arvind;
Arvind.display3();


return 0;
}