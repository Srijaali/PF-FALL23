#include <stdio.h>
int main() {
           int user,computer;
           int matchsticks = 21;

            printf("--Welcome to the Game--");
            printf("\nThe Rules are: ");
            printf("\n1.There are 21 matchsticks. ");
            printf("\n2. The user and the computer can pick 1,2,3 or 4 match sticks. ");
            printf("\n3. Whoever is forced to pick up the last matchstick loses the game. ");
            printf("\n---------------");

            printf("\nStarting the Game!");

            while(matchsticks > 0) {
                printf("\nMatchsticks remaining: %d\n", matchsticks);
                printf("You can choose 1,2,3 or 4 matchsticks. ");
                fflush(stdin); scanf("%d", &user);
            
                if(user < 1 || user > 4 || user > matchsticks) {
                    printf("\nInvalid Option chosen");
                    continue;
                }
                matchsticks = matchsticks - user;
                if(matchsticks == 0) {
                    printf("\nYou picked the last matchstick. YOU LOST!");
                    printf("\nGAME OVER");
                    break;
                }

                computer = 5 - user;
                printf("Computer %d matchstick", computer);
                matchsticks = matchsticks - computer;
            
            }


    return 0;
}
