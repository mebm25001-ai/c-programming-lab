/*#include <stdio.h>
 int main() {
  int a =2 ,b=3 , c ;
   c=(a++,b++,a+b,b++,++b);//++b mai 6 hojayega aur voh 6 hi rahega // //aur a++ mai uski value a 2 hi rahegi but next mai change hojayega 
    printf("%d\n",c);
    return 0;
 }

#include <stdio.h>
int main() {
 int a = 2, b = 5, c;
 (a==2&&b==5)? printf("k+%d\n",a++): printf("k+%d\n",++b);
 (a==0&&b==5)? printf("k+%d\n",a++): printf("k+%d\n",++b);
 return 0;
}*/
// input 1-7, print day name of week
/*#include <stdio.h>
int main() {
 int number;
 printf("Enter a number (1-7): ");
 scanf("%d", &number);
 switch (number) { // switch case mai hum sirf equal to hi check kar sakte hai aur yeh if and else se zyada efficient hota hai //
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid ! Please enter a number between 1 to 7.\n");
        break;
 }
}*/
// input two numbers and operator ,calculate addition ,subtraction ,multiplication ,division//   
#include <stdio.h>
int main() {
    char operator;
    int num1, num2;
    printf("Enter one numbers: ");
    scanf(" %d", &num1);
    printf("Enter second numbers: "); 
    scanf(" %d", &num2);
    printf("Enter an operator (+, -, *, /):/n");
    scanf(" %c", &operator);
    switch(operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':              
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

}




