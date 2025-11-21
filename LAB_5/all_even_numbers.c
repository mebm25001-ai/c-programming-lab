//write a program to print all even numbers between 1 to 100 using for loops //
#include<stdio.h>
int main(){     
    int i;
    printf("Even numbers between 1 to 100 ");
    for(i=0;i<=99;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}