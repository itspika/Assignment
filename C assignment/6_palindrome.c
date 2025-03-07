// WAP to input a string and check it to be palindrome.
main(){
char str[100];
int i=0,j=0,length,mismatch=0;
printf("Enter a string : ");
gets(str);
while(str[i]){
i++;
}
length=i;
for(i=0,j=length-1;i<length/2;i++,j--){
if(str[i]!=str[j]){
mismatch=1;
break;
}
}
mismatch? printf("%s is not a palindrome",str) : printf("%s is a palindrome",str);
}
