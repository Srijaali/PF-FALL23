/* Programmer name: Rija Ali
* Desc: symmetry of array
*/Date: 10/10/23


#include <stdio.h>
int symmetric(int arr[][3], int arr2[][3]){
            
            for (int i=0; i<3;i++){
                for (int j=0;j<3;j++){
                    arr2[i][j]=arr[j][i];
                }
            }
            
            for (int i=0; i<3;i++){
                for (int j=0;j<3;j++){
                    if(arr[i][j]!=arr2[i][j])
                        return 0;
                }
            }
            return 1;
}

int main(){
    int arr[3][3]={{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
    int arr2[3][3];
    if (symmetric(arr, arr2)==0)
    printf("Not symmetric");
    else 
    printf("symmetric");
}
