#include<stdio.h>

main(){
	
	int i,j,a,b;
	int c[i][j];
	float avg = 0;
	float sum = 0;
	
	
	printf("Enter the rows:- \n");
	scanf ("%d",&a);
	
	printf("Enter the colomns:- \n");
	scanf ("%d",&b);
	
	
	printf("Enter the elements:- \n");
	
	for(i=0; i<a; i++){
	
		
			for(j=0; j<b; j++){
				
				scanf("%d",&c[i][j]);
			}
		
		
		
	}
	
	printf("\n");
	
	for(i=0; i<a; i++){
	
		
			for(j=0; j<b; j++){
				
				sum = sum + c[i][j];
				avg = sum/(a*b);
						
			}
	
	}
	
	
	printf("The average is:- %f",avg);

}
