#include<stdio.h>

main(){
	
	int array[2][5];
	int i;
	int j;
	
	j = sizeof(array[0]) / sizeof(int);
	i = (sizeof(array)   / sizeof(int)) / j;
	
	printf("Rows:- %d",i);
	printf("Cols:- %d",j);
	
	
	
	
	
	
	
}
