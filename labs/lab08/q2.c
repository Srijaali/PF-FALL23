//basic arithmetic using functions
#include <stdio.h>
 
 int main(){
 			int a,b;
 			char operation;
 			printf("enter two numbers: ");
 			scanf("%d %d", &a,&b);
 		
 			printf("enter any operation you want to perform the calculation with from +,-,*,/");
 			scanf(" %c", &operation);
 	
 	
 			switch(operation){
 				case '+':
 					
 					printf("the sum is %d", sum(a,b));
 					break;
 				case '-':
				 	subtract(a,b);
					 printf("the subtraction is %d", subtract(a,b));
					 break;
				case '*':
					multiply(a,b);	
					printf("the multiplication is %d", multiply(a,b));
					break;
				case '/':
					divide(a,b);
					printf("the division is %d", divide(a,b));
					break;
 				
 				
 				
 				
 				
 				
 				
			 }
 	
 	
 }
 
 	int sum(int a,int b) {
 		int sum;
 		sum = a + b;
 		return sum;
	 }
	 
	 int subtract(int a,int b) {
 		int subtract;
 		subtract = a - b;
 		return subtract;
	 }
	 
	int multiply(int a,int b) {
 		int multiply;
 		multiply = a * b;
 		return multiply;
	 }
	 
	 int divide(int a,int b) {
 		int divide;
 		divide = a / b;
 		return divide;
	 }
	 
