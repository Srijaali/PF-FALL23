#include <stdio.h>
//swaping integers
void swapinteger(int *a ,int *b);

int main() {
				int a,b,temp;
				printf("Enter two numbers: ");
				scanf("%d %d", &a, &b);
							
				swapinteger(&a ,&b);
	
	
	}
	
	void swapinteger(int *a ,int *b) {
						
				int temp=a;
                    a=b;
                    b=temp;
		
			printf("%d %d", *a, *b);
		
		
	}
