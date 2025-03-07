// WAP to input a number and print that much of prime numbers
#include <stdbool.h>
main(){
	int n,i,k,num;
	bool j;
	printf("Enter count of prime numbers to print: ");
	scanf("%d", &num);
	k=0;
	n=2;
	while(k<num){
		j=false;
		for(i=2;i<n;i++){
			if(n%i==0){
				j= true;
				break;
			}
		}
		if(j==false){
			printf("%d ", n);
			k=k+1;
		}
		n++;
	}
}
