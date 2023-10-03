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
	
 
	if(ans%3==0 || ans%5==0 || ans%7==0) {
		sum =  sum + ans;
	}

}
	printf("the sum is: %d\n", sum);
	return 1;

}
