#include <stdio.h>

void reverse(int *arr,  int size){


	int i=0;
	int n=size-1;	
	while(i<size/2){
	
	int tmp=*(arr+i);
	arr[i]=arr[n];
	arr[n]=tmp;	
	i++;
	n--;
}

	
}


int main() {
	
	int n=10;
	int arr[n];
	int i=0;
	printf("Enter the elements of the Array: ");
	

	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
		for(i=0; i<n; i++){
		printf("%d", arr[i]);
	}
	
	reverse(arr,n);
		for(i=0; i<n; i++){
			printf("%d\t", arr[i]);
		}
	
	
	
	
	
	return 0;
}
