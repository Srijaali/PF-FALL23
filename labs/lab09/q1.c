*/
*Programmer: Syeda Rija Ali
*Date: 31/10/23
*Desc: swapping using pointers
/*

#include <stdio.h>

void swap(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;	
}

int main(){
	
		int j=2, k=5;
		printf("j=%d, k=%d\n", j,k);
		swap(&j,&k); //the values of j and k were not swapped because previously the value of j was was not stored at the adress of k and vice versa 
		printf("j=%d, k=%d\n", j,k);
		
	
	return 0;
}
