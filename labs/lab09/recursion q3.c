/*
Programmer: Syeda Rija Ali
Desc: Finding GCD using loops and recusions taking the values in the beginning
*/
#include <stdio.h>

int gcd(int a,int b);
int main(){
    int j= 198;
    int k = 167;
    int temp =1;
    printf("%d", gcd(j,k));
    //through loops 
    for(int i=0;temp != 0 ;i++){
        temp = j%k;
        j = k;
        k = temp;
    }
    printf("%d",j);
}
//through recursion;
int gcd(int a,int b){
    if(b<=0) return 1;
    return gcd(b,a%b);
}
