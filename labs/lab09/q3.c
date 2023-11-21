/*
Programmer:  Syeda Rija Ali
Desc: Printing the addresses and values stored in all these 
arrays one by one using pointer arithmetic.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N,i;
    printf("Enter the size of the arrays: ");
    scanf("%d", &N);

    // Seed the random number generator
    srand(time(NULL));

    // Declare and initialize arrays
    char Arraya[N];
    int Arrayb[N];
    long long int Arrayc[N];

    for (i = 0; i < N; i++) {
        Arraya[i] = rand() % 256;  // Random char value between 0 and 255
        Arrayb[i] = rand();
        Arrayc[i] = ((long long int)rand() << 32) | (long long int)rand();
    }

    // Printing addresses and values using pointer arithmetic
    char *charPtr = Arraya;
    int *intPtr = Arrayb;
    long long int *longLongPtr = Arrayc;

    printf("\nPrinting Arraya:\n");
    for (i = 0; i < N; i++) {
        printf("Address: %p, Value: %d\n", (void *)charPtr, *charPtr);
        charPtr++;
    }

    printf("\nPrinting Arrayb:\n");
    for (i = 0; i < N; i++) {
        printf("Address: %p, Value: %d\n", (void *)intPtr, *intPtr);
        intPtr++;
    }

    printf("\nPrinting Arrayc:\n");
    for (i = 0; i < N; i++) {
        printf("Address: %p, Value: %lld\n", (void *)longLongPtr, *longLongPtr);
        longLongPtr++;
    }

    return 0;
}
