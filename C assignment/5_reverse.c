// WAP to input a string and reverse print it
#include <stdio.h>
#include<ctype.h>
main(){
	char str[100]; 
    int i = 0; 
    printf("Enter a string: ");
    gets(str); 
    while (str[i]){
        i++;   
    }   
    printf("Reverse of the of the string: ");
    for(i--;i>=0;i--){
    	putchar(str[i]);
	}
}
