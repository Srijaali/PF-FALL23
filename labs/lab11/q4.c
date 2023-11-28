/*
name: Rija Ali
description: take employee data and increase salaries
*/
#include <stdio.h>

//structure holding data of employees
struct employee {
    char name[10];
    int salary;
    int hrsperday;
};

//function to increase the salary based on hourse worked per day
void increaseSalary(struct employee employeedata[]) {
    int i;
    for (i = 0; i < 10; i++) {
        if (employeedata[i].hrsperday >= 12) {
            employeedata[i].salary +=  150;
        } else if (employeedata[i].hrsperday >= 10) {
            employeedata[i].salary += 100;
        } else if (employeedata[i].hrsperday >= 8) {
            employeedata[i].salary +=  50;
        }
    }
}

int main() {
	//initializing a array of structures
    struct employee employeedata[10];
    int i;
    
    //populating the array
    for (i = 0; i < 10; ++i) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employeedata[i].name);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%d", &employeedata[i].salary);
        printf("Enter hours of work per day for employee %d: ", i + 1);
        scanf("%d", &employeedata[i].hrsperday);

        printf("\n");
    }

    // Increase salary based on hours worked
    increaseSalary(employeedata);
    
    //printing the new increased salary
    printf("Employee Details:\n");
    for (i = 0; i < 10; ++i) {
        printf("Name: %s\n", employeedata[i].name);
        printf("Final Salary: $%d\n", employeedata[i].salary);
        printf("\n");
    }

    return 0;
}
