#include<stdio.h>

void swap(int *a,int *b){
	
	int c;
	
    c=*a;
	*a=*b;
	*b=c;
	printf("\n");
	
	printf("Enter First Value :%d\n",*a);
	printf("Enter second Value :%d",*b);

	
}
main(){
	
	int c,d;
	
	printf("Enter First Value :",c);
	scanf("%d",&c);
	
	printf("Enter second Value :",d);
	scanf("%d",&d);
	
	swap(&c,&d);
}

