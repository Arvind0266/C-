#include<iostream>
using namespace std;

class student{
     string name;
    public:
   
    int age;
    bool gender;
    student()
    {
        cout<<"Default constructor"<<endl;
    }
    student(string n,int a,int g)
    {
        cout<<"Parameterized constructor"<<endl;
        name=n;
        age=a;
        gender=g;
    }
    student(student &a)
    {
        cout<<"Copy Constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    ~student()
    {
        cout<<"Destructor"<<endl;
    }
    string getname()
    {
        return name;
    }
    void set(string s)
    {
        name=s;
    }
    void get()
    {
        cout<<name<<endl;
    }
    void printInfo()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;

    }
};
int main()
{
    // student arr[3];
    // for(int i=0;i<3;i++)
    // {
    //     string s;
    //     cout<<"ENTER STUDENTS "<<(i+1)<<endl;
    //      cout<<"Name = ";
    //     cin>>s;
    //     arr[i].set(s);
    //      cout<<"Age = ";
    //     cin>>arr[i].age;
    //      cout<<"gender = ";
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<3;i++)
    // {
    //    arr[i].printInfo();
       
    // }

    student a("arvind",18,1);
    a.printInfo();
    

    return 0;

}