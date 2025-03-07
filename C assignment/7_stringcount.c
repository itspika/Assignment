// WAP to input a string count of alphabets, digits and special characters in that string
main(){
	char str[100];
	int i=0,a=0,d=0,sp=0;
	
	printf("Enter a string : ");
	gets(str);
	
	while(str[i]){
		if(isalpha(str[i])) a++;
		else if(isdigit(str[i])) d++;
		else sp++;
		
		i++;
	}
	printf("Alphabets: %d, Digits: %d, Special Character: %d", a,d,sp);
}
