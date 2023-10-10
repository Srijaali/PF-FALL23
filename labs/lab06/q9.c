/* Programmer name: Rija Ali
* Desc: max and min number withn an array
*/Date: 10/10/23




#include <stdio.h>
int main() {
int arr[] = {4,1,6,8,10,21,8,9,2,6};
int i,j,min,max;

    
min = arr[0];
max = arr[0];


    for(i=0; i<10; i++){
    if(max < arr[i])
        max = arr[i];
    else if(min > arr[i])
            min = arr[i];
}

    printf("Max: %d\nMin: %d", max,min);





return 0;




}
