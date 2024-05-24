#include<stdio.h>
int div();
main(){
	int i;
	printf("enter i:-");
	scanf("%d",&i);
	
	div(i);
	
}

int div(int i){
	
	if(i%3==0 && i%5==0){
			printf("its divisan");
     
	}
	else{
	        printf("not divisen");
	}
	
	return div;
}
