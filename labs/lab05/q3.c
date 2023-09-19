#include <stdio.h>
int main () {
	char option ,y,Y,n,N;
	printf(" Are you sure to delete? enter [y/Y] / [n/N] ");
	scanf("%c", &option);
	switch(option) {

	case 'Y' : 
	printf(" Deleted Successfully");
	break;

	case 'y' :
	printf(" Deleted Successfully");
	break;

	case 'N' :
	printf(" Delete Cancelled");
	break;

	case 'n' :
	printf(" Delete Cancelled");
	break;

	default :
	printf("Choose the right Option");
}

	return 0;   


}
