


#include <stdio.h>
int main() {
            int n;
            int nooflines=7;


            for(n=0; n<nooflines; n++) {
                if(n%2==0)
                 {
                    printf("%d %d %d %d \n", n,n,n,n);
                }
                else
                {
                    printf(" %d  %d \n", n,n);
                }
            }
                return 0;

}
