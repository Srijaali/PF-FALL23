//Array is [4, 8, 1, 15, 6]
#include <stdio.h>
#include <string.h>

void processarray(int n, int arr1[]) {
            int sum=0;
            int min = arr1[0];
            int max = arr1[0];
		
        printf("Enter the elements of array: ");

                for(int i=0; i<n; i++){
                    	scanf("%d", &arr1[i]);
			sum = sum + arr1[i];
              
    for(int i=0; i<n; i++){
    if(max < arr1[i])
        max = arr1[i];
    else if(min > arr1[i])
            min = arr1[i];
}
    
}
    printf("the sum is: %d\n", sum);
    printf("Max: %d\nMin: %d", max, min);
}

int main(){
	
	
	int arr1[5]={4,8,1,15,6};


    processarray(5,arr1);
    return 0;
}
