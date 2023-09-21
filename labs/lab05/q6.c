#include <stdio.h>
int main() {
            int num;
            int bitnum7;
            int bitnum4;
            printf("Enter 8 bit number; ");
            scanf("%d", &num);

            bitnum7 = (num / 1000000) % 10;
            bitnum4 = (num / 1000) % 10;

            if(bitnum7 && bitnum4) {
                num = num - 1000000 - 1000;
            } 
               printf("%d", num);

                return 0;

} //end main 
