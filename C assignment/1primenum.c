// WAP to input a number and check it to be prime number
#include <stdbool.h>
int main(){
	int n,i;
	bool j;
	char choice;
	
	for(;;){
		printf("Enter a number: ");
		scanf("%d%*c", &n);
		
		if (n == 2) {
		    printf("%d is a prime number\n", n);
	    }else {
            j = false;
	    	for(i=2;i<=n-1;i++){
				if(n%i==0){
					j= true;
					break;
				}
			}
			
			if(j)
				printf("%d is a not a prime no.\n",n);
			else	
				printf("%d is a prime number\n",n);
			
		}
			
		printf("\n\nCheck more numbers [Y/N] ? ");
		choice=getchar();
		if(!(choice=='y' || choice=='Y')) break;

	}
	return 0;
}

