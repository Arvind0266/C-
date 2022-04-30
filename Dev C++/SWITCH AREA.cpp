#include<stdio.h>
int main()
{
	int ch,a,b;
	for(;;)
	{
	
	printf("\nENTER YOUR CHOICE: ");
	printf("\n1-AREA OF SQUARE,2-AREA OF RECTANGLE,3-AREA OF CIRCLE,4-AREA OF TRIANGLE,5-EXIT \n");
	scanf("%d"  , &ch);
	switch(ch)
	{
	case 1:	{
		printf("Enter The Sides Of Square=  ");
		scanf("%d",&a);
		printf("Area Of Square= %d",(a*a));
	
		break;
	}
	case 2:
			printf("\nDIFFERENCE =%d",(a-b));
			break;
	case 3:
		printf("\nProduct=%d",(a*b));
        break;
	case 4:
		printf("\nQuotient=%d",(a/b));
	    break;
	case 5:
		printf("\nRemainder=%d",(a%b));
		break;
	default:
			printf("Exit");
			return 0;
	}
	
	


}
}
	