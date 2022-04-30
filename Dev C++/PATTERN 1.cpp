#include<stdio.h>
int main()
{
	int a=64,n;
	char ch;
	printf("Enter The Range= ");
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		for (int j=1;j<=i;j++)
		{
		ch=(char)a+j;
		printf(" %c ",ch  );	
		}
		printf("\n");
	}
}