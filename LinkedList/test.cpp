#include <stdio.h>
#include <math.h>
int main()
{   int a;
float b,c,d,e,f,g;
      printf("Enter The value of a: ");
    scanf("%d", &a);
    printf("Enter the values of b,c,d,e: ");
        scanf("%f %f %f %f", &b, &c, &d, &e);
    if(a != 0)
    { 
        
            if((b>=1 && b<=10000) && (c>=1 && c<=10) && (d>=1 && d<=10) && (e>=1 && e<=10))
            {
                
            b = pow(b, 2);
            d = pow(d, 3);
            c = pow(c, 2);
            e = pow(e, 3);
             f =(b/d);
            g = (c/e);
            printf("%f %f %f %f %f ", a, b, c, d, e);
            printf("\n %f %f",f,g);
           
        }
           
        if (f == g)
            printf("\n YES");
        else
            printf("\n NO");
      
    }
}