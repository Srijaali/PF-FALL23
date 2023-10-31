
 /*Programmer : Syeda Rija Ali
 *Desc : input a string and find the count of a char used
/*

#include <stdio.h>  
#include <string.h>   
int main() {
    char strings[100];
    char searchingChar;
    int j = 0;
	  int i = 0;
  
    printf("Enter a text: ");
    fgets(strings, sizeof(strings), stdin);


    printf("Enter a character to search for: ");
    scanf(" %c", &searchChar);


    for (i = 0; strings[i] != '\0'; i++) {
        if (strings[i] == searchingChar) {
            j++;
        }
    }

    // Printing total count of occurrences
    printf("Total occurrences of '%c' in the text: %d\n", searchChar, j);

    return 0;
}
