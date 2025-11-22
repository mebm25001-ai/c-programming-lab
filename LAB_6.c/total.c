//ask the user to input how many numbers they want to enter and find the sum and average of them by entering negative number//
#include<stdio.h>
int main() {
    int n, i;
    float num, sum = 0, average;
    int count = 0;

    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        if(num < 0) {
         break;
        }
        sum += num;
        count++;
    }
    while (n<0)
    {
        printf("invalid number, Enter again");
        scanf("%d",&n);}


    if(count > 0) {
        average = sum / count;
        printf("\nSum = %.2f\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("\nNo valid numbers entered!\n");
    }

    return 0;
}

    
    
    
    








