#include<stdio.h>
main(){
	
	int n;
	
	printf("Enter Number: ");
	scanf("%d",&n);
	
	int i;
	int a[n] ;
	int *c[100];
	
	for(i=0; i<n; i++){
		printf("Enter value:",i);
		scanf("%d",&a[i]);
	}

	for(i=0; i<n; i++){
		
		c[i] = &a[i];
		printf("printed element : %d\n", *c[i]);
	
	}
	
}
