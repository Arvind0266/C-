#include<stdio.h>
int main()
{
	int ch,a,b;
	for(;;){
	
	printf("\nENTER YOUR CHOICE: ");
	printf("\n1-ADD,2-SUBSTRACT,3-PRODUCT,4-QUOTIENT,5-REMAINDER \n");
	scanf("%d"  , &ch);
	
	
	printf("\nENTER THE VALUES OF A AND B  ");
	scanf("%d, %d",&a,&b);
	switch(ch)
	{
	
	
		case 1:	
		printf("\nSUM=%d",a+b);
		break;
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
			printf("NOT A CASE");
			return 0;
	}
	
	


}
}
	