#include <stdio.h>
int processarray(int n, int i) {
            int sum=0;
          
		printf("Enter size of array");
		scanf("%d",&n);

		int arr1[100];
		printf("Enter the elements of array: ");

                for(i=0; i<n; i++){
                    	scanf("%d", &arr[i]);
			sum = sum + arr[i];
                }
               
		 printf("the sum is: %d", sum);
            
         //max and min   
	printf("Enter array size:");
	scanf("%d",&n);
	
	int arr2[n];
	printf("Enter array elements:");
int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
}

int j,min,max;

    
min = arr[0];
max = arr[0];


    for(i=0; i<10; i++){
    if(max < arr[i])
        max = arr[i];
    else if(min > arr[i])
            min = arr[i];
}

    printf("Max: %d\nMin: %d", max,min);
}

int main(){
	int n;
		printf("Enter array size:");
	scanf("%d",&n);
	
	int arr2[n];
	printf("Enter array elements:");
int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);

    processarray(n,arr);
}
