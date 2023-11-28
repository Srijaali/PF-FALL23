/*
Programmer: Syeda Rija Ali
desc: making a CVS file and counting num of rows and columns in it
date:28/11/23
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("example.txt", "r"); 
    int j,i; 
    //error handling
	if (file == NULL) {
        printf("Error opening file");
        exit(0);
    }

    int rows = 0;
    int columns = 0;
    char c;

    // Counting columns in the header
    while ((c = fgetc(file)) != '\n') {
        if (c == ',') {
            columns++;
        }
    }

    // takes you back to the beggining of the file
    rewind(file);
    
    
    // Allocates memory for header and data
    char header[256];
    //3-d array for declaring a table
    char data[256][columns + 1][256]; // Assuming a maximum of 256 rows

    // Read and print header
    fgets(header, sizeof(header), file);
    printf("%s\n\n", header);

    // Read and print data
    while (fscanf(file, "%[^,\n]%*c", data[rows][0]) != EOF) {
        for ( j = 1; j <= columns; j++) {
            fscanf(file, "%[^,\n]%*c", data[rows][j]);
        }

        rows++;

        if (rows >= 256) {
            // Maximum number of rows reached
            break;
        }
    }

    // Print data in tabular form
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j <= columns; j++) {
            printf("%s", data[i][j]);
        }
        printf("|");
    }
    
    // printing the data
    printf("\nTotal number of rows: %d\n", columns+1);
    printf("Total number of columns: %d\n", rows );

    fclose(file);

    return 0;
}
