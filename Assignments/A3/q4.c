/*
Name: Rija Ali
Desc: Displaying the details of the workers having a maximum salary for each department.
*/


#include<stdio.h>
#include<string.h>

struct employee_data {
	char id[4];
	char fname[25];
	char lname[25];
	int salary;
	char date[50];
	char dept[10];
};

struct employee_data employees[8] = {
	{"001", "Monka", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
    {"002", "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
    {"003", "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
    {"004", "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
    {"005", "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
    {"006", "Vipul", "Diwan", 200000, "2014-06-11 09:00:00", "Account"},
    {"007", "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
    {"008", "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"}
};

int main()
{
	int i, indexHR, indexAdmin, indexAcc;
    int HRMax = 0, AdminMax = 0, AccMax = 0, totalHR = 0, totalAdmin = 0, totalAcc = 0;
	
	for(i=0; i<8; i++)
	{
		if(strcmp(employees[i].dept, "HR") == 0)
		{
			totalHR += employees[i].salary;
			if(HRMax < employees[i].salary)
			{
				HRMax = employees[i].salary;
				indexHR = i;
			}
		}
		else if(strcmp(employees[i].dept, "Admin") == 0)
		{
			totalAdmin += employees[i].salary;
			if(AdminMax < employees[i].salary)
			{
				AdminMax = employees[i].salary;				
				indexAdmin = i;
			}
		}
		else if(strcmp(employees[i].dept, "Account") == 0)
		{
			totalAcc += employees[i].salary;
			if(AccMax < employees[i].salary)
			{
				AccMax = employees[i].salary;			
				indexAcc = i;
			}
		}
	}
	printf("%-15s %-15s %-15s %-15d %-15s %-15s\n", employees[indexHR].id, employees[indexHR].fname, employees[indexHR].lname, employees[indexHR].salary, employees[indexHR].date, employees[indexHR].dept);
	printf("%-15s %-15s %-15s %-15d %-15s %-15s\n", employees[indexAdmin].id, employees[indexAdmin].fname, employees[indexAdmin].lname, employees[indexAdmin].salary, employees[indexAdmin].date, employees[indexAdmin].dept);
	printf("%-15s %-15s %-15s %-15d %-15s %-15s\n", employees[indexAcc].id, employees[indexAcc].fname, employees[indexAcc].lname, employees[indexAcc].salary, employees[indexAcc].date, employees[indexAcc].dept);
	
	printf("\n\nHR - %d\nAdmin - %d\nAccount - %d", totalHR, totalAdmin, totalAcc);
	
	
}
