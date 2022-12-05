#include<stdio.h>

main(){
	
	int r,c;
	int i,j;
	
	int a[2][2] = {1,2,3,4};
	int b[3][3] = {7,8,9,10};	
	
	r = (sizeof(a)/sizeof(a[0]));  
    c = (sizeof(a)/sizeof(a[0][0]))/r;
	
	int total[r][c];
	
	for(i=0;i<r;i++){
		
		
		for(j=0;j<c;j++){
			
					total[i][j] = a[i][j] + b[i][j];
		}
		
		
	}

	printf("Sum is:- \n");
	
	for(i=0;i<r;i++){
		
		
		for(j=0;j<c;j++){
			
					printf("%d ", total[i][j]);
		}
		
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
}
