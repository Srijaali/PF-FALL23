/*
* Programmer: Syeda Rija Ali
* Desc:  findinf a path from the starting point to the exit.
*/

#include <stdio.h>
int main(){

	char arr[5][5]={{'S','O','O','W','W'},{'O','W','O','W','W'},{'W','O','O','W','O'},{'W','W','O','W','O'},{'W','W','O','E','W'}};
    char safeArray[5][5];
    int i,j;
    
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    	safeArray[i][j]=arr[i][j];
		}
	}
	printf("\nDISPLAYING INPUT ARRAY:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
        printf(" %c  ", arr[i][j]);
        }
        printf("\n");
    }
   
   
    int a=0;
    int b=0;
    int pathfound=0;
    while (a >= 0 && a < 5 && b >= 0 && b < 5) {
        safeArray[a][b] = 'S';

        if (a == 4 && b == 3 && arr[a][b] == 'E') {
            pathfound = 1;
            break;
        }

        
        if (b + 1 < 5 && (arr[a][b + 1] == 'S' || arr[a][b + 1] == 'O' || arr[a][b + 1] == 'E')) {
            b = b + 1;
        }
        
        else if (a + 1 < 5 && (arr[a + 1][b] == 'S' || arr[a + 1][b] == 'O' || arr[a + 1][b] == 'E')) {
            a = a + 1;
        }
        
        else {
            safeArray[a][b] = 'O';

            if (a == 0 && b == 0) {
                break; 
            }

            if (b > 0 && safeArray[a][b - 1] == 'S') {
                b = b - 1;
            } else {
                a = a - 1;
            }
        }
    }
    

    if (pathfound) {
        printf("\n\nOutput Maze After Traversal:\n");
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (safeArray[i][j] == 'S') {
                    printf("%d, %d    ", i, j);
                }
            }
        }
    } else {
        printf("Path Not Found");
    }

    
}

	


