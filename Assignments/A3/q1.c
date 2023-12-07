/*  
Name: Syeda Rija Ali
Desc: Finding max in sub-array
Date: 7-Dec-23
*/

#include<stdio.h>

void Matrix2x2()
{
	int matrix[2][2], Max = 0;
	int i, j;
	
	printf("\nEnter Matrix\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Row %d Column %d: ", i+1, j+1);
			scanf(" %d",&matrix[i][j]);
		}
	}
	
	printf("The matrix entered: \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			if(Max < matrix[i][j])
			{
				Max = matrix[i][j];
			}
		}
	}
	
	printf("The Resultant Matrix is: \n");
	for(i=0; i<1; i++)
	{
		for(j=0; j<1; j++)
		{
			printf("%d", Max);
		}
	}
}

void Matrix4x4()
{
	int matrix2[4][4], Max[2][2] = {0};
	int i, j;
	
	printf("\nEnter Matrix\n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("Row %d Column %d: ", i+1, j+1);
			scanf(" %d",&matrix2[i][j]);
		}
	}
	
	printf("The matrix entered: \n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d\t", matrix2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<4; i+=2)
	{
		for(j=0; j<4; j+=2)
		{
			if (Max[i / 2][j / 2] < matrix2[i][j])
            {
                Max[i / 2][j / 2] = matrix2[i][j];
            }
            if (Max[i / 2][j / 2] < matrix2[i][j + 1])
            {
                Max[i / 2][j / 2] = matrix2[i][j + 1];
            }
            if (Max[i / 2][j / 2] < matrix2[i + 1][j])
            {
                Max[i / 2][j / 2] = matrix2[i + 1][j];
            }
            if (Max[i / 2][j / 2] < matrix2[i + 1][j + 1])
            {
                Max[i / 2][j / 2] = matrix2[i + 1][j + 1];
            }
		}
	}
	
	printf("The Resultant Matrix is: \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t", Max[i][j]);
		}
		printf("\n");
	}
}

void Matrix8x8()
{
	int matrix3[8][8], Max[4][4] = {0};
	int i, j;
	
	printf("\nEnter Matrix\n");
	for(i=0; i<8; i++)
	{
		for(j=0; j<8; j++)
		{
			printf("Row %d Column %d: ", i+1, j+1);
			scanf(" %d",&matrix3[i][j]);
		}
	}
	
	printf("The matrix entered: \n");
	for(i=0; i<8; i++)
	{
		for(j=0; j<8; j++)
		{
			printf("%d\t", matrix3[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<8; i+=2)
	{
		for(j=0; j<8; j+=2)
		{
			if (Max[i / 2][j / 2] < matrix3[i][j])
            {
                Max[i / 2][j / 2] = matrix3[i][j];
            }
            if (Max[i / 2][j / 2] < matrix3[i][j + 1])
            {
                Max[i / 2][j / 2] = matrix3[i][j + 1];
            }
            if (Max[i / 2][j / 2] < matrix3[i + 1][j])
            {
                Max[i / 2][j / 2] = matrix3[i + 1][j];
            }
            if (Max[i / 2][j / 2] < matrix3[i + 1][j + 1])
            {
                Max[i / 2][j / 2] = matrix3[i + 1][j + 1];
            }
		}
	}
	
	printf("The Resultant Matrix is: \n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d\t", Max[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int choice;
	do
	{
		printf("1.2x2\n2.4x4\n3.8x8\n");
		printf("Choose from option (1-3) to enter the size of the matrix: ");
		scanf(" %d",&choice);
		
		switch(choice)
		{
			case 1:
				Matrix2x2();
				break;
			case 2:
				Matrix4x4();
				break;
			case 3:
				Matrix8x8();
				break;
			default:
				printf("Invalid choice entered\nPlease enter choice between 1-3 \n\n");
				break;
		}
	}while(choice != 1 && choice != 2 && choice != 3);
}
