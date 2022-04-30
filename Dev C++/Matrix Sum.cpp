#include<stdio.h>
int main()
{
		int n,m,sum=0;
	printf("Enter the No. of rows and column of a matrix= ");
	scanf("%d %d",&n,&m);
	int arr[n][m];
	printf("Enter the matrix\n");
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<m;j++)
	{
		scanf("%d",&arr[i][j]);
	}
}
printf("The Matrix In tabular Form is \n");
for(int i=0;i<n;i++)
	{
	for(int j=0;j<m;j++)
	{
		printf("%d  ",arr[i][j]);
	}
	printf("\n");
}

	printf("Row Sum= ");
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			sum=sum+arr[i][j];
			
		}
		printf("  %d  ",sum);
		sum=0;
	}
	printf("\n Column sum= ");
		for(int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			sum=sum+arr[j][i];
			
		}
		printf("  %d  ",sum);
		sum=0;
	}
	
}