#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n)
{
    int count=0;
   for (int i = 1; i<n; i++)
   {
       if(n%i==0)
       count++;
   }
   if(count==1)
   return true;
   else
   return false;
} 
int main()
{
    int n;
    cout<<"Enter the positive natural number= ";
    cin>>n;
    int arr[n/2];int count=0;int x=0;
for (int i = 1; i <=n/2; i++)
{
    if(isprime(i) && (n%i==0))
    {
        arr[count]=i;
        count++;
    }
}
cout<<"Prime Factors are= ";
for (int i = 0; i < count; i++)
{
    cout<<arr[i];
    if(i<count-1)
    cout<<"*";
}
cout<<endl;
for (int i = 0; i < count; i++)
{
    for (int j = i+1; j < count; j++)
    {
        if(arr[i]==arr[j])
        x++;
    }
}
if(x==0)
{
    cout<<"Number Of Distinct Prime Factors= "<<count<<endl;
    cout<<"M("<<n<<")= "<<(int)pow((-1),count)<<endl;
}
else if(x>0)
{
    cout<<"Duplicate Prime Factors"<<endl;
    cout<<"M("<<n<<")= 0"<<endl;
}
else
{
    cout<<"No Prime Factors"<<endl;
    cout<<"M("<<")= 1"<<endl;
}
}
