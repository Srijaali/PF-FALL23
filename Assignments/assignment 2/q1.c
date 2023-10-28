/* 
* Programmer: Syeda Rija Ali
* desc: 2D arrays array that represents the batting performance of a cricket team.
/*
#include <stdio.h>
int main () {
//row=i=batsmen, column=j=inningsplayed by batsmen
            int noofbatsmen, noofinnings;

            printf("Enter the number of batsmen: ");
            scanf("%d", &noofbatsmen);

            printf("Enter the number of innings played by each batsmen: ");
            scanf("%d", &noofinnings);

        int arr[noofbatsmen][noofinnings];


        int i,j;
        printf("Input batting performance: ");
        for(int i=0; i<noofbatsmen; i++){
            for(int j=0; j<noofinnings; j++){
                scanf("%d", &arr[i][j]);
            }
        }

        for(int i=0; i<noofbatsmen; i++){
           
            int totalruns=0;
            int highestscore=0;
            int centuries=0;
            int hcenturies=0;

            for(int j=0; j<noofinnings; j++){
                totalruns += arr[i][j];

                if(arr[i][j]>highestscore){
                    highestscore = arr[i][j];
                }

                if(arr[i][j]>= 50 && arr[i][j]<100){
                    hcenturies++;
                }
                else if(arr[i][j]>=100){
                    centuries++;
                }
            }

            float avgruns=totalruns/noofinnings;

            //printf("Stats for batsmen %d are\n" i + 1);
            printf("Batsmen %d:\n", i+1);
            printf("The total runs are %d\n", totalruns);
            printf("The highest score is %d\n", highestscore);
            printf("The no of Half centuries are %d\n", hcenturies);
            printf("The no of Centuries are %d\n", centuries);
            printf("Average runs per innings are %f\n", avgruns);



            


        }














    return 0;
}
