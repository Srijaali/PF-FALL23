#include <stdio.h>
#include <string.h>

int calculatediscount(int purchaseamt, int noofvisits){

int discount;

        if(noofvisits > 10 && purchaseamt >= 50) {
            discount = 0.15 * purchaseamt;
        
        } else if(noofvisits > 5 && purchaseamt >= 30) {
            discount = .10 * purchaseamt;
        
        } else {
            discount = 0;
            printf("no discount applied\n");
        }

return discount;
}


int main () {
                int purchaseamt,noofvisits;

                printf("Enter the no. of times you have visted the shop: ");
                scanf("%d", &noofvisits);

                printf("Enter the total purchase amount in $: ");
                scanf("%d", &purchaseamt);

        int discount = calculatediscount(purchaseamt, noofvisits);

        printf("Discounted Amount: %d\n", discount);

        return 0;
    
}
