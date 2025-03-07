// Write a C program that takes a password as input and checks if it meets the following criteria:
//At least 8 characters long
//Contains at least one uppercase letter
//Contains at least one lowercase letter
//Contains at least one digit
//Contains at least one special character (@, #, $, %, etc.)
#include <stdio.h>
#include <stdbool.h>
int main(){
	char pwd[100];
	int i,n=0;
	bool upper=false,lower=false,dig=false,special=false;
	printf("Enter password: ");
	gets(pwd);
	
	for(i=0;pwd[i]!='\0';i++){
		n++;
	}
	if(n<8){
		printf("Error! Char length is %d, it should be a minimum of 8 characters", n);
		return 1;
	}

	for(i=0;pwd[i]!='\0';i++){
		if(isupper(pwd[i]))
			upper=true;
		else if(islower(pwd[i]))
			lower=true;
		else if(isdigit(pwd[i]))
			dig=true;
		else if(ispunct(pwd[i]))
			special=true;
		}
	if(upper==true && lower==true && dig==true && special==true){
		printf("\nValid Password");
	}
	else printf("\nInvalid password must contain at least one uppercase letter, one lowercase letter, one digit, and one special character.");
}
