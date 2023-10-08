/**
*Programmer : Syeda Rija Ali
*Desc : Lab06; even,odd
*Date : 3rd October 2023

#include <stdio.h>
int main() {
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	if (a<=9) {
	for (int k = a; k <= b; ++k)
	{ 
	switch(k) {

	case 0: printf("Zero "); break;
	case 1: printf("One "); break;
	case 2: printf("Two "); break;
	case 3: printf("Three "); break;
	case 4: printf("Four "); break;
	case 5: printf("Five "); break;
	case 6: printf("Six "); break;
	case 7: printf("Seven "); break;
	case 8: printf("Eight"); break;
	case 9: printf("Nine"); break;
    }
    
    if(k%2==0) printf(" it is Even\n ");
		else printf("it is Odd\n ");




}
    }
}
