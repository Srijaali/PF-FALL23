/*
*Programmer: Syeda Rija Ali
*Desc: flights availability using 2d array
/*
/* 1. flight availabilty: user ppref based on price and avaialability
2. preference of moring time slot: determine days 
3. preference of evening time slot: determine days
4. traveler inquiry abot flights availability, confirm price and time.
*/

//row=i=day, column=j=time slot(morn/even);

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){

            int flights[5][4]= {{1,300,0,0},{1,320,1,310}, {0,0,1,280}, {1,380,0,0},{1,375,1,400}};
            int i,bestmorop,bestevenop;
            int bestmorprice=INT_MAX;
            int bestevenprice=INT_MAX;
            int availablemorop[5]={0}, availableevenop[5]={0};

            for(i=0; i<5; i++){
                        if(flights[i][0]==1 && flights[i][1]< bestmorprice){
                            bestmorop=i;
                            bestmorprice=flights[i][1];
                        }
                        if(flights[i][2]==1 && flights[i][3]< bestevenprice){
                            bestevenop=i;
                            bestevenprice=flights[i][3];
                        }
            }
                    printf("Best morning option is Day:%d Price:%d\n", bestmorop,bestmorprice);
                     printf("Best Evening option is Day:%d Price:%d\n", bestevenop,bestevenprice);

// MORNING SLOT PREFERENCE: Check availability and choose best option acc to price.

                    int morningprice=bestmorprice; //since bestmorprice was the best option.
                    for(i=0; i<5; i++){
                        if(flights[i][0]==1){
                            ++availablemorop[i];
                        }
                    }
                    for(i=0; i<5; i++){
                        if(availablemorop[i]==1){
                            printf("Flights available in Morning slot at day:%d\n",i);
                        }
                    }
                    		printf("The best option in morning according to price among these is day:%d price=%d\n\n",bestmorop,morningprice);

// EVENING SLOT PREFERENCE: Check availabilty and choose best opytion acc to price.


                    int eveningprice=bestevenprice; //since bestevenprice was the best option.
                    for(i=0; i<5; i++){
                        if(flights[i][2]==1){
                            ++availableevenop[i];
                        }
                    }
                    for(i=0; i<5; i++){
                        if(availableevenop[i]==1){
                            printf("Flights available in Evening slot at day:%d\n",i);
                        }
                    }
                    		printf("The best option in evening according to price among these is day:%d price=%d\n\n",bestevenop,eveningprice);

//INQUIRY DAY: Confirm if flights are availlable and prvide if prices are available.

                    int inquiryday;
                    printf("Enter the day you want to inquire about(1-5): ");
                    scanf("%d", &inquiryday);

                     int morningavbl = flights[inquiryday][0];
                     int mornflightprice = flights[inquiryday][1];
                     int eveningavbl = flights[inquiryday][2];
                     int evenflightprice = flights[inquiryday][3];

    printf("INQUIRY DAY DETAILS:\n");

    if (morningavbl==1 || eveningavbl==1) 
	{
        if (morningavbl==1) 
		{
            printf("Morning flight available at Price: %d\n", mornflightprice);
        }
        if (eveningavbl==1) 
		{
            printf("Evening flight is available at Price: %d\n", evenflightprice);
        }
    } 
	else 
	{
        printf("No flights available on inquiry day");
    }


    return 0;
}
