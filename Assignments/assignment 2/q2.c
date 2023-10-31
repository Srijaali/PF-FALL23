/*
* Programmer: Syeda Rija Ali
* Desc: finding the largest square submatrix of 1s in a given binary matrix


*/

#include <stdio.h>
int main()
{
	
	int m,n,i,j,l;
	printf("Input the number of rows:");
	scanf("%d",&m);
	
	printf("Input the number of columns:");
	scanf("%d",&n);
	
	int mat[m][n];
	printf("Enter binary matrix:");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat[i][j]);
		}
		}
		int maximumside=0;
		int side=0;
		int found=0;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(mat[i][j]==1){
					side=1;
					found=1;
					
					while(i + side < m && j + side < n && found){
					
						for (l = i; l <= i + side; l++) {
                        if (mat[l][j + side] == 0) {
                            found=0;
                            break;
                        }
                    }
                    for (l = j; l <= j + side; l++) {
                        if (mat[i + side][l] == 0) {
                            found= 0;
                            break;
                        }
                    }
                    if (found==1) {
                        side=side+1;
                    }
                }
					
					if(side>maximumside){
						maximumside=side;
					}
				}
			}
		}
		if(maximumside==0){
			printf("no dimensions found!");
		}
		else{
			for(i=0;i<maximumside;i++){
				for(j=0;j<maximumside;j++){
					printf("1");
				}
				printf("\n");
			}
			printf("The largest submatrix is of %d by %d",maximumside,maximumside);
		}
	
		
}
