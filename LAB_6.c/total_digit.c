//enter a number give the digit //
#include<stdio.h>
int main(){
    int number,count=0;
    printf("enter a number");
    scanf("%d",&number);

   while (number > 0) {
            number = number / 10;
            count++;
        }
    
    printf("Total digits = %d\n", count);

    return 0;

    }




