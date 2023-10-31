#include <stdio.h>

void factorial(int n){
	if(n==1){
		printf("the factorial is 1");
	}else{
	
		int	fact=n*(n-1);
		//factorial(fact);
		printf("%d", fact);

}
	
		
}



int main(){
		int n,i;
		int fact;
		printf("Enter the value of n: ");
		scanf("%d", &n);
		
		factorial(n);
	
	
	
	return 0;
}
