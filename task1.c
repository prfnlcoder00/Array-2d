#include<stdio.h>

main(){
	
	int i,j,a,b;

	printf("Enter the rows of 2d array:-    \n");
	printf("Enter the colomns of 2d array:- \n");
		
	scanf("%d\n%d",&i,&j);
	
	int c[i][j];
	
	printf("Enter the elements:- \n");
	
		for(a=0; a<i; a++){
			
			
				for(b=0; b<j; b++){
					
					scanf("%d",&c[a][b]);
		}
			
		}
		
		for(a=0; a<i; a++){
			
			
				for(b=0; b<j; b++){
					
					printf("%d",c[a][b]);
		}
			
		}
		
	
}	
