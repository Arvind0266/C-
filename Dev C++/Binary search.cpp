#include<stdio.h>
int main()
{
	int n,no,count=0;
	printf("Enter Array size= ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Array Element =\n");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
		
	}
	printf("Enter The No. To be searched= ");
	scanf("%d",&no);
	int lb,mid,ub;
lb=0;ub=n;mid=((lb+ub)/2);
while(lb<=ub)
{

	if(a[mid]<no)
	{
		lb=mid+1;
		
	}
	if(a[mid]>no)
	{
		ub=mid-1;
	}
		if(a[mid]==no)
	{
		count=1;

		break;

} }

if(count==1)	
	 printf("search successfull");
else
printf("Not found ");
}




