#include<iostream>
using namespace std;
int main()
{
    string arr1[]={" ","I","II","III","IV","V","VI","VII","VIII","IX"};
    string arr2[]={" ","X","XX","XXX","XL","L","LX","LXX","LXXX","XC","C"};
    string arr3[]={" ","C","CC","CCC","CD","D","DC","DCC","DCCC","CM","M"};
    string arr4[]={" ","M","MM","MMM","IV̅","V̅","V̅M","V̅MM","V̅MMM","V̅MMMM","X̅"};
    int n;
    cin>>n;
    cout<<arr4[n/1000]<<arr3[(n%1000)/100]<<arr2[((n%1000)%100)/10]<<arr1[(n%1000)%10];
}