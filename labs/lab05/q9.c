#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()  {
               float a,b,c;
               printf("Enter a: ");
               scanf("%f", &a);
               printf("Enter b: ");
               scanf("%f", &b);
               printf("Enter c: ");
               scanf("%f", &c);

                float sqroot;
                float discriminant = (b*b)-(4*a*c);
                if(discriminant < 0) {
                    printf("Imaginary roots \n");
                }
                else if(discriminant > 0) {
                    sqroot=sqrt(discriminant);
                    float x1 =((-1*b)+(sqroot))/(2*a);
                    float x2 =((-1*b)-(sqroot))/(2*a);
                     printf(" The roots are Distinct and Real %f %f\n", x1,x2);
                }else if(discriminant == 0) {
                    printf("Real Roots \n");
                }
                return 0;



}
