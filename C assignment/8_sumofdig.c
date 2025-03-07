// WAP to input an alphanumeric string and print the sum of all digits present in the string
#include <stdio.h>
#include<ctype.h>
main(){
	char str[100]; 
	int i=0, sum=0;
    printf("Enter an alphanumeric string: ");
	gets(str);
	
	while(str[i]){
		if(isdigit(str[i]))
			sum=sum+str[i]-'0';
		i++;
	}
	printf("Sum of digits is %d", sum);
}
