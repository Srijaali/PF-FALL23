/*
* Programmer: Syeda Rija Ali
* Desc: printing age and price in ascending and descending order respectively using 2D array.
/*

#include <stdio.h>
int main() {
                int arr[3][2];
                int i,j,temp;

                for(i=0; i<3; i++){
                    printf("Enter the Age of shirt %d: ", i+1);
                    scanf("%d", &arr[i][0]);
             
                    printf("Enter the Price of shirt %d: ", i+1);
                    scanf("%d", &arr[i][1]);

                }

//ascending order:

        for(i=0; i<3; i++){
            for(j=i+1; j<3; j++){
                if(arr[i][0]>arr[j][0]){

                    temp=arr[i][0];
                    arr[i][0]=arr[j][0];
                    arr[j][0]=temp;
                }
            }
        }
            printf("Ascending order with respect to Age is:\n");
                printf("Age\tPrice\n");
            for(i=0; i<3; i++){
                printf("%d\t%d\n", arr[i][0],arr[i][1]);
            }

//descending order:

        for(i=0; i<3; i++){
            for(j=i+1; j<3; j++){
                if(arr[i][1]<arr[j][1]){

                    temp=arr[i][1];
                    arr[i][1]=arr[j][1];
                    arr[j][1]=temp;
                }
            }
        }
            printf("Descending order with respect to Price is:\n");
                printf("Age\tPrice\n");
            for(i=0; i<3; i++){
                printf("%d\t%d\n", arr[i][0],arr[i][1]);
            }

    return 0;
}
