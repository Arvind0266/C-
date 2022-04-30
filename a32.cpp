#include<iostream>
using namespace std;
class student
{
protected: 
int roll_No;
public:
void set_roll_number(int);
void get_roll_number();
};
void student::set_roll_number(int r)
{
    roll_No=r;
}
void student::get_roll_number()
{
    cout<<"Roll Number is "<<roll_No<<endl;
}
class marks:public student
{
    protected:
    float m1,m2;
    public:
    void set_Marks(float,float);
    void get_marks();
};
void marks::set_Marks(float m,float p)
{
    m1=m;
    m2=p;
}
void marks::get_marks()
{
    cout<<"The marks of Math is "<<m1<<endl;
    cout<<"The marks of physics is "<<m2<<endl;
}
class result:public marks
{private: float percentage;
public:
void displayResult();

};
void result::displayResult()
{
    get_roll_number();
    get_marks();
    cout<<"Your Result is "<<(m1+m2)/2<<"%"<<endl;
}
int main()
{
    result arvind;
    arvind.set_roll_number(23);
    arvind.set_Marks(44,45);
    arvind.displayResult();



return 0;
}