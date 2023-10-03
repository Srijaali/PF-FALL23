/** Programmer : Syeda Rija Ali
*Desc : lab06; fibbonacci
*Date : 3rd October 2023



#include <stdio.h>
int main() {

	int n;
	int i=1;
	int sum=0;
	int temp=1;
	int prev=0;
	int ans=0;

	printf("Enter a Number: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
{
	
	ans=temp+prev;
	if(ans>10000) break;
	printf("%d ",ans);
	prev=temp;
	temp=ans;
	
 
	if(n%3==0 || n%5==0 || n%7==0) {
		sum =  sum + n;
	}

}
	printf("%d", sum);
	return 0;

}
