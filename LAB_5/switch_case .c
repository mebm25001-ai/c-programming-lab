// user need to input character uppercase or lowercase number or special character//
#include <stdio.h>  
/*int main(){
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if(ch >= 'A' && ch <= 'Z') {
        printf("it is in upper case\n");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("it is in lower case\n");
    }
    else if (ch>='0' && ch<='9'){
        printf("%c is a digit \n",ch);
    }
    else{
        printf("%c is a speacial character",ch);
    }
*/

int main() {
	char ch;
	printf("Enter your character: \n");
	scanf("%c",&ch);
	printf("The ASCII value is : %d \n",ch);
	
	
	if (ch>=65 && ch<=90) {
		printf("%c is an uppercase character",ch);
	} 
	else if (ch>=97 && ch<=122) {
		printf("%c is an lowercase character",ch);
	}
	else if (ch>=48 && ch<=57) {
		printf("%c is an numeric character",ch);
    }
    else if ((ch>=33 && ch<=46) || (ch>=58 && ch<=64)) {
		printf("%c is an special character",ch);
    }
    else{
    	printf("you have entered something non recognisable...");
	}
	return 0;
}














