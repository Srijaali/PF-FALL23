//* Programmer: Rija Ali
//* Desc: multiplying a 2x2 matrix
//* Date: 10/10/23
//*

#include <stdio.h>
int main() {
       const int n=2;
		int i,j;
		int matrix1[2][2];
		int matrix2[2][2];
		int ans[n][n];
		printf("Enter elements of the first 2x2 matrix: ");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++) {
				scanf("%d", &matrix1[i][j]);
            }
        }
fflush(stdin);
		printf("Enter elements of the second 2x2 matrix: ");
				for(i=0;i<n;i++){
		for(j=0;j<n;j++) {
			scanf("%d", &matrix2[i][j]);
        }
}
ans[0][0] = (matrix1[0][0]*matrix2[0][0]) + (matrix1[0][1]*matrix2[1][0]);
		ans[0][1] = (matrix1[0][0]*matrix2[0][1]) + (matrix1[0][1]*matrix2[1][1]);
		ans[1][0] = (matrix1[1][0]*matrix2[0][0]) + (matrix1[1][1]*matrix2[1][0]);
		ans[1][1] = (matrix1[1][0]*matrix2[0][1]) + (matrix1[1][1]*matrix2[1][1]); 

		for(i=0; i<n; i++) {
            for(j=0; j<n; j++){
                printf("The multiplication of matrix is: %d\n",ans[i][j]);
            }
        } 
}
