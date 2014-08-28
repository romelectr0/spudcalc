#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a;
int n;
int b;
int d;
int c;
float y;
float pi = 3.14159265359;
int main()
{
    printf("=============================SPUDCALC=========================\n");
    printf("write the ask value or 0 if you want that the program calcul it !!\n");
    printf("the cannon lenght:");
    scanf("%d",&a);
    printf("the cannon diameter:");
    scanf("%d",&b);
    printf("the chamber lenght:");
    scanf("%d",&c);
    printf("the chamber diameter:");
    scanf("%d",&d);
    if (a == 0) {
        y=(((((d/2)*(d/2))*pi)*c)/(1.7*(((b/2)*(b/2))*pi)));
        printf("the perfect lenght of your cannon is: %f",y);
    }
    if (b == 0) {
        y=((sqrtf((((((d/2)*(d/2))*pi)*c)/(1.7*a))/pi))*2);
        printf("the perfect diameter of your cannon is %f",y);
    }
    if (d == 0) {
        y=((sqrtf(((((b/2)*(b/2)*pi)*a)*1.7)/(c*pi)))*2);
        printf("the perfect diameter of your chamber is: %f",y);
    }
    if  (c == 0) {
        y=((((((b/2)*(b/2))*pi)*a)*1.7)/(((d/2)*(d/2))*pi));
        printf("the perfect lenght of your chamber is: %f",y);
    }
    scanf("%d",&n);
    return 0;
}
