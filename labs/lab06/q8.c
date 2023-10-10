/* Programmer name: Rija Ali
* Desc: reversing an array
*/Date: 10/10/23




#include <stdio.h>
int main() {
            int arrOfnums[] = {1,2,3,4,5,6,7,8,9};
            int i,reverse,numbers;

                for(i=0; i<9; i++){
                  numbers= arrOfnums[i]; 
                
                printf("%d\n", numbers);
                }

            for(i=8; i>=0; i--){
                reverse = arrOfnums[i];
                printf("\nthe reverse is: ");
                printf("%d\n", reverse);
            }
            return 0; 



}
