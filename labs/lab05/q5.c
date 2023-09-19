#include <stdio.h>
int main() {
            //Write a C program to input a character from the user and check whether the given character is a small alphabet, capital alphabet, digit or special character, using if else.
          char A,a,Z,z;
          char character;

          printf("Enter any character: ");
          scanf(" %c", &character);


        if(character >= 'a' && character <= 'z') {
            printf("Small Alphabet");
        }else if (character >= 'A' && character <= 'Z') {
            printf("Capital Alphabet");
        }else if( character >= '0' && character <= '9') {
            printf("It is a Digit");
        }else {
            printf("It is a special chracter");
        }

        return 0;

} //end main
