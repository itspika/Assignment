// WAP to input two numbers and print all prime numbers in range
#include <stdbool.h>
main(){
	int l,h,i,j;
	bool flag;
	printf("Enter lower number of range: ");
	scanf("%d%*c", &l);
	printf("Enter Higher number of range: ");
	scanf("%d%*c", &h);
	for(i=l+1;i<=h-1;i++){
		flag = false;
		for(j=2;j<=i-1;j++){
			if(i%j==0){
				flag=true;
				break;
			}	
		}
		if(flag==false){
			printf("%d ", i);
		}
		
	}
	
}
