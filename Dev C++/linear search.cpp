#include<stdio.h>
int main()
{
	int n,s,count=0;
	printf("Enter Array size= ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Array Element =\n");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
		
	}
	printf("Enter The No. To be searched= ");
	scanf("%d",&s);
	for(int i=0;i<n;i++)
	{
		if(a[i]==s)
		count++;
		
	}
	if(count!=0)
	printf("Search successfull");
	else
	printf("Search Not Successfull");
}