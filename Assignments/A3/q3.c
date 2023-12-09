/* 
Name: Rija Ali
Desc: merging files
*/


#include <stdio.h>


struct worker {
    int ID;
    char name[20];
    int salary;
} ;

void personal();
void department();
void combining();

int main() {
	
    personal();
    department();
    combining();

    return 0;
}

void personal() {
    int i;
    struct worker w[3];
    FILE *file;
    file = fopen("personal.txt", "w");

    if (file == NULL) {
        printf("Unable to open File.\n");
    }
	
	printf("Enter Data for Personal File!\n\n");
    for (i = 0; i < 3; i++) {
        printf("Enter ID: ");
        scanf("%d", &w[i].ID);
        printf("Enter name of Worker: ");
        scanf("%s", w[i].name);
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        fprintf(file, "%d %s\n", w[i].ID, w[i].name);
    }

    fclose(file);
}

void department() {
    int i;
     struct worker w[3];
    FILE *file;
    file = fopen("departement.txt", "w");

    if (file == NULL) {
        printf("Unable to open File.\n");
        return;
    }

	printf("Enter Data for Salary File!\n\n");
    for (i = 0; i < 3; i++) {
        printf("Enter ID: ");
        scanf("%d", &w[i].ID);
        printf("Enter Salary of Worker: ");
        scanf("%d", &w[i].salary);
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        fprintf(file, "%d %d\n", w[i].ID, w[i].salary);
    }

    fclose(file);
}

void combining() {
	 struct worker w[3];
    int i, t[3];
    FILE *per = fopen("personal.txt", "r");
    FILE *dep = fopen("departement.txt", "r");
    FILE *file = fopen("combine.txt", "w");

    if (file == NULL || per == NULL || dep == NULL) {
        printf("Unable to open File.\n");
        return;
    }

    fprintf(file, "ID\tName\tSalary\n");

    for (i = 0; i < 3; i++) {
        printf("Enter the ID which you wish to merge: ");
        scanf("%d", &t[i]);

        while (fscanf(per, "%d %s", &w[i].ID, w[i].name) != EOF) {
            if (w[i].ID == t[i]) {
                fprintf(file, "%d\t%s\t", w[i].ID, w[i].name);
                break;
            }
        }

        while (fscanf(dep, "%d %d", &w[i].ID, &w[i].salary) != EOF) {
            if (w[i].ID == t[i]) {
                fprintf(file, "%d\n", w[i].salary);
                break;
            }
        }
    }

    fclose(per);
    fclose(dep);
    fclose(file);
}
