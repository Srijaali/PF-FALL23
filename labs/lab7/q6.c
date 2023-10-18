/* Programmer name: Rija Ali
* Desc: frequency of array
*/Date: 10/10/23


#include <stdio.h>

int main() {
    int n, i;
    const int x = 100;
    int freq[100] = {0};
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n]; 

    printf("Enter the elements of the array:\n");
    fflush(stdin);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (i = 0; i < x; i++) {
        if (freq[i] != 0) {
            printf("Frequency of %d is %d\n", i, freq[i]);
        }
    }

    return 0;
}
