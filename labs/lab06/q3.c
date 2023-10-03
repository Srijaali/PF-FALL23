/* 
*programmer: Syeda Rija Ali
*dec: lab06 ; gcd & lcm
*date: 3rd october 2023


#include <stdio.h>
int main() {

	int n1,n2,lcm,gcd,y,z;
	printf("Enter two integers; ");
	scanf("%d %d", &n1, &n2);
	y=n1;
	z=n2;

	if(n1 != n2){ 
	if(n1 > n2) {
	n1= n1-n2;
	printf("gcd=%d",n1);
	gcd=n1;
	
}
	else{
	n2= n2-n1;
	printf("gcd=%d",n2);
	gcd=n2;
}
}
	lcm= (y*z)/gcd;
	printf("LCM is: %d", lcm);
	return 0;



}
