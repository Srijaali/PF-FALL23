/*
Programmer: Syeda Rija Ali
Date: 19-Nov-2023
Description: making a universal array print function which can print any data type's array 
             using pointer arithmetics
*/

#include <stdio.h>
void printarray(void *arr, int size,char DataType){
    // Determine the size of each element based on the data type
    for(int i=0;i<size;i++){
        switch(DataType){
            case 'i':
                printf("%d ", *((int*)arr +i));
                break;
            case 'c':
                printf("%c ", *((char*)arr + i));
                break;
            case 'f':
                printf("%.3f ", *((float*)arr +i));
                break;
                
                default:
                printf("invalid data type\n");
                return;
        }
    }
    printf("\n");
    
}
int main(){
    
    int intarr[] = {1,2,3,4,5};
    char chararr[] = {'A','B','C','D','E'};
    float floatarr[] = {1.1,2.22,3,3,4.44,5.5};
    
    printarray(intarr,5,'i');
    printarray(chararr,5,'c');
    printarray(floatarr,6,'f');
}
