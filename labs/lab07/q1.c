/* Programmer name: Rija Ali
* Desc: divide without operator
*/Date: 10/10/23

#include <stdio.h>
int main() {
		int x;
		int y;
		int q=0;
	
		printf("Enter two positive integers: ");
		scanf("%d %d", &x,&y);

		while ( x >= y) {
		x = x - y;
		q = q++;
		}

		printf("\n The quotient is: %d", q);
		printf("\n The remainder is: %d", x);



	return 0;
}

