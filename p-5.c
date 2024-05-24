#include<stdio.h>
main(){
	
	int a[3],b[3],sum[3];
	int *ptr;
	int *ptr1;
	int i;
	
	for(i=0;i<3;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++){
		printf("b[%d]",i);
		scanf("%d",&b[i]);
	}
	
	*ptr=&a[i];
	*ptr1=&b[i];
	
	for(i=0;i<3;i++){
	
		sum[i]=*ptr+*ptr1;
	
	}
	
	for(i=0;i<3;i++){
		printf("%d",sum[i]);
	}
	
	
	
	
	
}


