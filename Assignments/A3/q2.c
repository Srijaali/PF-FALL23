#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct roles {
    char name[30];
    char role[30];
    int communication;
    int teamwork;
    int creativity;
};

struct Departments {
    char name[30];
    struct roles employees[5];
};

int num_gen(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void names(char name_pool[20][30]) {
    char RandomNames[20][30] = {"Ahmad", "Arham", "Fatima", "Zainab", "Bilal",
                                 "Fawad", "Ahad", "Sara", "Rameen", "Taha",
                                 "Dania", "Faraz", "Munir", "Hammad", "Ayan",
                                 "Ayesha", "Ali", "Salaar", "Naveed", "Abbas"};

	int i;
    for (i = 0; i < 20; i++) {
        strcpy(name_pool[i], RandomNames[i]);
    }
}

void assign_departments(struct Departments *departments, char name_pool[20][30], char names[20]) {
    char a[20] = {0};
    int i;
    
    for (i = 0; i < 5; i++) {
    	
        int index;
        do {
            index = num_gen(0, 19);
        } while (a[index] || names[index]);

        strcpy(departments->employees[i].name, name_pool[index]);
        a[index] = 1;
        names[index] = 1;

        if (i == 0) {
            strcpy(departments->employees[i].role, "Director");
        } else if (i == 1) {
            strcpy(departments->employees[i].role, "Executive");
        } else if (i == 2) {
            strcpy(departments->employees[i].role, "Manager");
        } else if (i == 3) {
            strcpy(departments->employees[i].role, "Employee");
        } else if (i == 4) {
            strcpy(departments->employees[i].role, "Trainee");
        }

        departments->employees[i].communication = num_gen(1, 100);
        departments->employees[i].creativity = num_gen(1, 100);
        departments->employees[i].teamwork = num_gen(1, 100);
    }
}

int main() {
    char name_pool[20][30];
    names(name_pool);
    struct Departments department[4];
    int i,j;
    srand(time(NULL));

	char assigned_names[20] = {0};
    for (i = 0; i < 4; i++) {
        if (i == 0) {
            strcpy(department[i].name, "HR");
        } else if (i == 1) {
            strcpy(department[i].name, "Finance");
        } else if (i == 2) {
            strcpy(department[i].name, "Marketing");
        } else if (i == 3) {
            strcpy(department[i].name, "Logistics");
        }
    }

    for (i = 0; i < 4; i++) {
        assign_departments(&department[i], name_pool, assigned_names);
    }

    for (i = 0; i < 4; i++) {
        printf("\t%s\t\n", department[i].name);
        for (j = 0; j < 5; j++) {
            printf("Name: %s\n",department[i].employees[j].name);
        }
        printf("\n");
    }
    
    int sum_HR = 0;
    int sum_Finance = 0;
    int sum_Marketing = 0;
    int sum_Logistics = 0;
    int max = 0;
    
    for (i=0;i<5;i++){
    	sum_HR = sum_HR + department[0].employees[i].communication + department[0].employees[i].creativity + department[0].employees[i].teamwork;
	}
    for (i=0;i<5;i++){
    	sum_Finance = sum_Finance + department[1].employees[i].communication + department[1].employees[i].creativity + department[1].employees[i].teamwork; 
	}
	for (i=0;i<5;i++){
		sum_Marketing = sum_Marketing + department[2].employees[i].communication + department[2].employees[i].creativity + department[2].employees[i].teamwork;
	} 
	for (i=0;i<5;i++){
		sum_Logistics = sum_Logistics + department[3].employees[i].communication + department[3].employees[i].creativity + department[3].employees[i].teamwork;
	}
	
	printf("__________________________\n\n");
	printf("HR:\t\t%d\nFinance:\t%d\nMarketing:\t%d\nLogistics:\t%d\n" ,sum_HR,sum_Finance,sum_Marketing,sum_Logistics);
	printf("\n");
	
	int a = 0;
	int b;
	if(sum_HR > a){
		a = sum_HR;
		b = 0;
	}
	if(sum_Finance > a){
		a = sum_Finance;
		b = 1;
	}
	if(sum_Marketing > a){
		a = sum_Marketing;
		b = 2;
	}
	if(sum_Logistics > a){
		a = sum_Logistics;
		b = 3;
	}
	
	printf("__________________________________\n\n");
	printf("\nDepartment with the highest sum:\n");
	printf("\t%s\t\n", department[b].name);
	for (j = 0; j < 5; j++) {
	    printf("Name: %s, Role: %s, Communication: %d, Teamwork: %d, Creativity: %d\n",
	           department[b].employees[j].name, department[b].employees[j].role,
	           department[b].employees[j].communication, department[b].employees[j].teamwork,
	           department[b].employees[j].creativity);
}
	
    return 0;
}

