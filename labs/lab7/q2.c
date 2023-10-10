/* Programmer: Rija Ali
* Desc: Array sum
* Date: 10/10/23
/*



#include <stdio.h>
int main() {
            int sum=0;
            int i,n;
		printf("Enter size of array");
		scanf("%d",&n);

		int arr[100];
		printf("Enter the elements of array: ");

                for(i=0; i<n; i++){
                    	scanf("%d", &arr[i]);
			sum = sum + arr[i];
                }
               
		 printf("the sum is: %d", sum);
            
            
            return 0; 



}
