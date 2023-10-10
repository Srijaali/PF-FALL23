/* Programmer: Rija Ali
* Desc: multiplying a 2x2 matrix
* Date: 10/10/23
/*

#include <stdio.h>
int main() {
		int i,j,ans;
		int matrix1[2][2];
		int matrix2[2][2];
		int ans[2][2];
		printf("Enter elements of the first 2x2 matrix: ");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++) {
				scanf("%d", &matrix1[i][j]);
}

}

		printf("Enter elements of the second 2x2 matrix: ");
				for(i=0;i<2;i++){
		for(j=0;j<2;j++) {
			scanf("%d", &matrix2[i][j]);
}

}

		ans[0][0] = matrix1[0][0]*matrix2[0][0] + matrix1[0][1]+matrix2[1][0];
		ans[0][1] = matrix1[0][0]*matrix2[0][1] + matrix1[0][1]+matrix2[1][1];
		ans[1][0] = matrix1[1][0]*matrix2[0][0] + matrix1[1][1]+matrix2[1][0];
		ans[1][1] = matrix1[1][0]*matrix2[0][1] + matrix1[1][1]+matrix2[1][1]; 

		

















	return 0;
}
