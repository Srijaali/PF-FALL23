/* Programmer name: Rija Ali
* Desc: array sum 
*/Date: 8/10/23




#include <stdio.h>
int main() {
            int arrOfnums[] = {1,2,3,4,5,6,7,8,9};
            int sum=0;
            int i;

                for(i=0; i<9; i++){
                    sum = sum + arrOfnums[i];
                }
                printf("the sum is: %d", sum);
            
            
            return 0; 



}
