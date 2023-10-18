/* Programmer name: Rija Ali
* Desc: subarray and finding sum within it
*/Date: 10/10/23


#include <stdio.h>
int main()
{
	int n;
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter array elements:");
int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
}
int s,j;
printf("Enter s:");
scanf("%d",&s);

int sum=0;
for(i=0;i<n;i++){
	sum=arr[i];
	if(s==sum){
		printf("The element at index %d gives the sum",i);
		}else
		{
			for(j=1+i;j<n;j++){
				sum=sum+arr[j];
				if(sum==s){
					printf("The elements from index %d to %d when summed result in %d\n",i,j,s);
					return 0;
				}
			}
		}
		
	}
}

  
