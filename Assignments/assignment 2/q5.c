/*
* Programmer: Syeda Rija Ali
* Desc: finding ramnujan numbers 
*/


#include <stdio.h>
#include <math.h>
int main(){
	
	
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	int i,j,x,y;
	for(i=1;i<=n;i++){
		
		for(j=i;j<=n;j++){
			
			int sum1=pow(i,3)+ pow(j,3);
			for(y=i;y<=n;y++){
				
				for(x=y;x<=n;x++){
					int sum2=pow(x,3) + pow(y,3);
					
					if((sum1==sum2) && (sum1<=n*n*n) && (i != y) && (i != x) && (j != y) && (j != x)){
						
					 printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, i, j, y, x);
					}
				}
			}
		}
	}
}
