#include<iostream>
using namespace std;
void move(int n,char source,char dest,char spare)
{
    if(n==1)
    {
        cout<<"move from"<<source<<"to"<<dest<<endl;
    }
    else{
        move(n-1,source,spare,dest);
        move(1,source,dest,spare);
        move(n-1,spare,dest,source);
    }
}
int main()
{
int n;
cout<<"Enter the number of rings= ";
cin>>n;
move(n,'A','C','B');
return 0;
}