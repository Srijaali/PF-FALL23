/*
* Programmer: Syeda Rija Ali
* Desc: To check if sum is equal to the target element and prit the pair of sums.
* Date: 29/10/23
*/

#include <stdio.h>
int main() {

            int n,t,i,j;
            int sum=0;
                printf("Enter the size of the array: ");
                scanf("%d", &n);
               int arr[n];

               printf("Enter the elements of the array: ");
               
                for(int i=0; i<n; i++){
                    scanf("%d", &arr[i]);
                }

                printf("Enter target element: ");
                scanf("%d", &t);
             
             for(int i=0; i<n; i++){
               
               for(int j=0; j<n; j++){
                    
                    if(arr[i]+arr[j]==t){
                 printf("(%d, %d)", arr[i], arr[j]);
         }
            
             }
             
                     }



    return 0;
}
