/*
Name: Rija Ali
desc: adding 45 days to a date struct
*/
#include <stdio.h>

struct Date{

int day;
int month;
int year;

};

//function for month
 int monthdays(int month, int year){
    switch(month) {
        case 4: case 6: case 9: case 11:
        return 30;

        case 2:
            if(year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
                return 29; //leap year
            else
                return 28;

        default:
             return 31;    

        }
 }
 void addDays(struct Date *date, int numDays) {
    int i;
	for (i = 0; i < numDays; i++) {
        date->day++; 

        // Check for the end of the month
        if (date->day >monthdays(date->month, date->year)) {
            date->day = 1;
            date->month++;

            // Check for the end of the year
            if (date->month > 12) {
                date->month = 1;
                date->year++;
            }
        }
    }
}

int main() {
    // Declare an instance of the Date structure
    struct Date currentDate;

    // Get input from the user for the current date
    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDate.day, &currentDate.month, &currentDate.year);

    // Add 45 days to the current date
    addDays(&currentDate, 45);

    // Display the final date
    printf("\nFinal Date after adding 45 days: %02d %02d %04d\n", currentDate.day, currentDate.month, currentDate.year);

    return 0;
}
