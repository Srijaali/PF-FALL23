#include <stdio.h>
int main() {
            
        int n,i,j,temp;
        
        printf("enter the size of array: "); 
        scanf("%d", &n);
           
            int arr[n];
            
            
        printf("enter the elements of array: ");
        for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
            }

        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if(arr[i]>arr[j]){

                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
            printf("Ascending order is: ");

            for(i=0; i<n; i++){
                printf("%d", arr[i]);
            }






}
