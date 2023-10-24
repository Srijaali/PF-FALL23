#include <stdio.h>
int main() {
	
			int carno,weekday;
			
			printf("Enter car number");
			scanf("%d", &carno);
			
			printf("Enter weekday");
			scanf("%d", &weekday);
			
			decideCarUsage( carno,  weekday);
		
			}
			

	int decideCarUsage(int carno, int weekday){
		if (carno%2==0 && weekday%2==0){
			printf(" can take car ");
			return 1;
		}else if(carno%2 != 0 && weekday%2 != 0 ){
				printf("can take car");
				return 1;
		} else{
			return 0;
		}
	}
