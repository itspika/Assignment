// WAP to input user id and password. Show the password character as $. Match the user id as drbpsharma and password as 123456. 
// If authentication passed print "Welcome to Secure System" else print "Authentication Failed"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
// #include <stdbool.h>
main(){
	char str[100], pwd[100];
//	char strid[100]="drbpsharma";
// 	char strpwd[100]="123456";
// bool flag=false;
	char c;
	int i=0;
	printf("Enter user id: ");
	gets(str);
	printf("Enter Password: ");
	while(i<51){
		c=getch();			
		if(c=='\r'){
			break;
		}
		putchar('$');
		pwd[i]=c;
		i++;
	}
	
	if (strcmp(str, "drbpsharma") == 0 && strcmp(pwd, "123456") == 0) {
	        printf("\nWelcome to Secure System\n");
	    } else {
	        printf("\nAuthentication Failed\n");
	    }	
	
}
/*	i=0;
	while (str[i] != '\0'){
		if(strid[i]==str[i] && strpwd[i]==pwd[i]){
			flag=true;
			i++;
		}
	}
	if(flag==true)
		printf("\nWelcome to Secure System");
	else printf("\nAuthentication Failed");
} */
