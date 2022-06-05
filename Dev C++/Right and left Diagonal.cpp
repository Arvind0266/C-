#include<stdio.h>
int main()
{
	int sum=0;
	int arr[4][4]={{5,7,9,11},{2,3,4,5},{6,7,8,9},{10,11,15,13}};
	printf("Left Diagonal Sum= ");
	for(int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			if(i==j)
			sum=sum+arr[i][j];
			
		}
	}
		printf("  %d  ",sum);
		sum=0;
	
	printf("\n Right Diagonal sum= ");
	int i=0;
		for (int j=4;j>=0;j--)
		{
			sum=sum+arr[j][i];
			i++;
			
		}
		printf("  %d  ",sum);
		sum=0;
	
	}
	
	