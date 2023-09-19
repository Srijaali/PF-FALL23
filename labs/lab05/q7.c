#include <stdio.h>
#include <math.h>

int main() {
             float actualamount;
             float savedamount;


             printf("Enter the total actual amount of items: ");
             scanf("%f", &actualamount);

            float discountprice;
              if(actualamount >= 2000 && actualamount <= 4000) {
                discountprice = actualamount-(actualamount * 20/100);
                printf("your discountprice is %f: \n",discountprice);
             }else if(actualamount >= 4001 && actualamount <= 6000) {
                discountprice = actualamount-(actualamount * 30/100);
                printf(" your discountprice is %f: \n",discountprice);
             }else if(actualamount >= 6000) {
                discountprice = actualamount-(actualamount * 50/100);
                printf("your discountprice is %f: \n", discountprice);
             }else if(actualamount <= 1999) {
                discountprice = actualamount;
                printf("No discount is applicable! \n", discountprice);
             }
              
              savedamount = actualamount-discountprice;
              printf(" your savedamount is %f: \n", savedamount);

            return 0;

}
