#include <stdio.h>
int main() {
            int lightintensity;
            printf("Enter light intensity (0-1000); \n");
            scanf("%d", &lightintensity);

            if(lightintensity > 500) {
                printf("Brightness under Sunshine");
            }else if(lightintensity >= 100 && lightintensity <= 500) {
                printf("Brightness under lighting");
            }else if(lightintensity >= 0 && lightintensity <= 100) {
                 printf("Brightness in Evening"); 
            }
                
                return 0;

} //end main
