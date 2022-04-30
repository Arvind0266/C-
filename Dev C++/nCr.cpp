			#include<iostream>
			using namespace std;
int factorial(int n)
{
	int fact=1;
	for(int i=2;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int n,r;
	cout<<"Enter The Value Of n and r of nCr= ";
cin>>n>>r;
if(n<r){
cout<<"n should be greater than r";}
else {
int a=factorial(n)/((factorial(n-r)*(factorial(r))));
cout <<a;
}
return 0;
}