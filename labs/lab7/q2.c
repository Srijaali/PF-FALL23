/* Programmer: Rija Ali
* Desc: Array rotation according to the given integer.
* Date: 10/10/23
/*
#include <stdio.h>
int main() {
      int arr[7]={1, 2, 3, 4, 5, 6, 7};
      int d;
      
      printf("Enter value of d: ");
           scanf("%d", &d);
      
      for (int i=d; i<7; i++)
      printf("%d ", arr[i]);
      
      for (int i=0; i<d; i++)
      printf("%d ", arr[i]);
}
