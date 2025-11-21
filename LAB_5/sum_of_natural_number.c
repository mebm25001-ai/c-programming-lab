//sum of first N natural  numbers//
#include<stdio.h>
int main(){
int N,count,sum=0;
scanf("%d",&N);

for(count=1;count<=N;count++)
sum=sum+count;
printf("sum=%d\n",sum);
return 0;


}