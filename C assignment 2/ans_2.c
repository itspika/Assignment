// WAP to input a string and print that string in upper case, lower case, reverse case, sentence case and toggle case
#include <stdio.h>
#include <ctype.h>
main(){
	int i, len;
	char str[100];
	printf("Enter the string: ");
	gets(str);
	printf("Upper case: ");
	for(i=0;str[i] != '\0';i++){
		printf("%c", toupper(str[i]));		
	}
	printf("\nLower case: ");
	for(i=0;str[i] != '\0';i++){
		printf("%c", tolower(str[i]));	
	}
	printf("\nReverse case: ");  // here we have i = length of the string from previous loop 
	for(i--;i>=0;i--){
		putchar(str[i]);	
	}
	printf("\nSentence case: ");
	printf("%c", toupper(str[0]));
	for(i=1;str[i] != '\0';i++){
		if(isupper(str[i])){
			printf("%c", tolower(str[i]));
		}
		else printf("%c", str[i]);
	}
	printf("\nToggle case: ");
	for(i=0;str[i] != '\0';i++){
		if(isupper(str[i])){
			printf("%c", tolower(str[i]));
		}
		else printf("%c", toupper(str[i]));
	}
}
