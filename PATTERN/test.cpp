// #include<bits/stdc++.h>
// using namespace std;
// class Complex
// {
//     int a,b;
//     friend Complex Sun(Complex,Complex);
//     public:
//     void setnum(int x,int y)
//     {
//         a=x;b=y;
//     }
//     void getnum()
//     {
//     cout<<"The Complex Number is "<<a<<" + "<<b<<" i "<<endl;
//     }
// };
// Complex Sun(Complex c1,Complex c2)
// {
//     Complex c3;
//     c3.setnum((c1.a+c2.a),(c1.b+c2.b));
    
//     return c3;
// }
// int main()
// {
//     Complex a,b,c;
//     a.setnum(10,20);
//     a.getnum();
//     b.setnum(20,40);
//     b.getnum();
//     c=Sun(a,b);
//     c.getnum();


// return 0;
// }


#include<iostream>
using namespace std;
class Student{
protected:
int roll_no;
public:
void set_number(int a){
roll_no = a;
}
void print_number(void){
cout<<"Your roll no is "<< roll_no<<endl;
}
};
class Test : virtual public Student{
protected:
float maths, physics;
public:
void set_marks(float m1, float m2){
maths = m1;
physics = m2;
}

void print_marks(void){
cout << "You result is here: "<<endl
<< "Maths: "<< maths<<endl
<< "Physics: "<< physics<<endl;
}
};
class Sports: virtual public Student{
protected:
float score;
public:
void set_score(float sc){
score = sc;
}
void print_score(void){
cout<<"Your PT score is "<<score<<endl;
}
};
class Result : public Test, public Sports{
private:
float total;
public:
void display(void){
total = maths + physics + score;
print_number();
print_marks();
print_score();
cout<< "Your total score is: "<<total<<endl;
}
};
int main(){
Result harry;
harry.set_number(4200);
harry.set_marks(78.9, 99.5);
harry.set_score(9);
harry.display();
return 0;
}