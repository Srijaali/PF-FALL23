#include <stdio.h>
int main() {
		int n;
		int sum=0;
		int i=1;
		int k;

		printf("Enter a number: ");
		scanf("%d", &n);
		
		do {
		k= n%i;
	if( k == 0) {
	sum = sum+i;
	i++;
}else{
	i++;
}

} while (i<n);

  
	if( sum == n) {
	printf("It is a Perfect Number");
} else {
	printf("It is not a Perfect Number");
}
		
	return 0;


}
