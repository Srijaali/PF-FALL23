#include <stdio.h>
#include <string.h>

struct EngineParts
{

        int yearofmanufacture;
        int quantity;
        char serialnumber[4];
        char material[25];
};

void information (int numofparts, struct EngineParts parts[]){

int i;
    
        printf("information on parts with serial number between BB1 and CC6\n");

for(i=0; i<numofparts;i++){
        if(parts[i].serialnumber[0]>='B'  && parts[i].serialnumber[0]<='C'
            && parts[i].serialnumber[1]>='B' && parts[i].serialnumber[1]<='C'
        && parts[i].serialnumber[2]>='1' && parts[i].serialnumber[2]<='6')  {

        printf("Serial number: %s\n", parts[i].serialnumber);
        printf("Year of Manufacture: %d\n", parts[i].yearofmanufacture);
        printf("Quantity: %d\n", parts[i].quantity);
        printf("Material: %s\n", parts[i].material);
           
            }

        }
    }

    int main(){

const int max=100;
int i;

struct EngineParts parts[max];

int numofparts;
       
        printf("information on parts with serial number between BB1 and CC6\n");

        printf("\nEnter the number of engine parts\n");
        scanf("%d", &numofparts); 

       for(i=0;i<numofparts;i++){
            printf("Enter the details for each engine part %d\n", i+1);

              printf("Enter serial number\n");
            scanf(" %s",parts[i].serialnumber);
             printf("Enter year of manufacture\n");
            scanf("%d",&parts[i].yearofmanufacture);
               printf("Enter quantity\n");
            scanf("%d",&parts[i].quantity);
               printf("Enter material\n");
            scanf(" %s",parts[i].material);

        }


        information(numofparts,parts);

        return 0;
    }
