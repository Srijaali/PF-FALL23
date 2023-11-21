/*
Programmer: Syeda Rija Ali
Date: 31/10/23
Desc: Write a function for finding product of 2 numbers without using multiplication operator and
loops. Use recursion and addition only.
*/
#include <stdio.h>
int mul(int x,int y){
    int s;
    if(y==0) return 0;
    
    s = x + mul(x,y-1);
    return s;
}
int main(){
    int a = 5;
    int b = 4;
    int s = mul(a,b);
    printf("%d",s);
}
