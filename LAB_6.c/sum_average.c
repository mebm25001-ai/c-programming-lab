//ask the user to input how many numbers they want to enter and find the sum and average of them//
#include<stdio.h>
int main(){
    int n,i;
    float sum=0,average,num;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter number %d: ",i);
        scanf("%f",&num);
        sum=sum+num;
    }
    average=sum/n;
    printf("Sum = %.2f\n",sum);
    printf("Average = %.2f\n",average);
    return 0;

    
    
    
    








}