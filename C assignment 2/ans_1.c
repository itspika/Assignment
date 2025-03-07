// WAP to input 10 floating values from user and show the smallest and biggest numbers in given values
#include <stdio.h>
main(){
	float ar[10];
	int i;
	float min, max;
	
	printf("Enter 10 floating values : ");
	for(i=0;i<10;i++){
		scanf("%f", &ar[i]);
	}
	printf("\nValues in array are : ");
	for(i=0;i<10;i++){
	printf("%.2f ",ar[i]);
	}
	
	min = max = ar[0];
	for(i = 1; i < 10; i++) {
        if(ar[i] < min) {
            min = ar[i];  
        }
        if(ar[i] > max) {
            max = ar[i];  
        }
    }
    printf("\nSmallest value: %.2f", min);
    printf("\nLargest value: %.2f\n", max);
}
