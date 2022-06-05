#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    double d, x, y;
    printf("Enter The Values Of a,b,c= ");
    scanf("%d,%d,%d", &a, &b, &c);
    printf("The Quadratic Equation is  ");
    printf("%dx^2 +%dx +%d ", a, b, c);
    d = b * b - 4 * a * c;
    if (d >= 0)
    {
        printf("\nRoots Are Real  ");
        x = (-b + sqrt(d)) / 2 * a;
        y = (-b - sqrt(d)) / 2 * a;
        printf("\nROOTS ARE =%f ,  %f  ", x, y);
        printf("\nPRODUCT OF THE ROOTS= %f", x * y);
        printf("\nSUM OF THE ROOTS= %f", x + y);
    }

    if (d < 0)
    {
        printf("\nRoots are imaginary");
        x = (-b + sqrt(d)) / 2 * a;
        y = (-b - sqrt(d)) / 2 * a;
        printf("\nROOTS ARE =%f ,  %f  ", x, y);
        printf("\nPRODUCT OF THE ROOTS= %f", x * y);
        printf("\nSUM OF THE ROOTS= %f", x + y);
    }
}