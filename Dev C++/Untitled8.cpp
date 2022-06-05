#include <iostream>
using namespace std;
int main() {
	int n,i;
	cout<<"Enter The Number= ";
	cin>>n;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0){
		cout<<" is Not Prime ";
	break;
	}
	}
	
	if(i==n)
	cout<<i<<" is Prime number";

}

