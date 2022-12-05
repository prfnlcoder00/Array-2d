#include <stdio.h>

main(){
	
    int r, n, i, j;
	int sum=0;
	
	printf("Enter no. of rows:-  ");
 	scanf("%i",&r);
	
	printf("Enter no. of col:-  ");
 	scanf("%i",&n);
    
	int a[r][n];
	
    printf("Enter elements\n");
    
    for(i=0;i<r;i++){
    	
        for(j=0;j<n;j++){
        	
            scanf("%i",&a[i][j]);
        
		}
   
    }
           
    for(i=0;i<r;i++){
       
        for(j=0;j<n;j++){
        	
            sum += a[i][j];
        
		}
	
		printf("Sum %d = %d\n",i,sum);
    
	 }

}
