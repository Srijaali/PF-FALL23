/*
Name: Rija Ali
desc: nested structures to print employee and organization data
*/

#include <stdio.h>
#include <string.h>

//employee data struct
struct Employee {
    int employee_id;
    char name[50];
    int salary;
};

//organisation data struct
struct Organization {

    char Organization_Name[50];
    int Organization_Number; 
    struct Employee details; //nested structure 
};

int main() { 

struct Organization org;
//org details
printf("Enter Name of Organization: ");
scanf("%s", org.Organization_Name);
printf("Enter Number of Organization");
scanf("%d", &org.Organization_Number);

//employee details
printf("Enter the name of the Employee:\n");
scanf("%s", org.details.name);

printf("Enter the ID of the Employee:\n");
scanf("%d", &org.details.employee_id);

printf("Enter the salary of the Employee:\n");
scanf("%d", &org.details.salary);


//printing data
printf("Organization name:%s\n", org.Organization_Name);
printf("Organization number:%d\n", org.Organization_Number);
printf("Employee Name:%s\n", org.details.name);
printf("Employee ID:%d\n", org.details.employee_id);
printf("Employee Salary:%d\n", org.details.salary);


return 0;
}

