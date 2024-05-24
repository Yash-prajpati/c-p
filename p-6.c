#include<stdio.h>

struct mobile{
	
	char cp_name[20];
	char color[20];
	int modal;
	int price;
	
};

void main(){
	
	struct mobile s1;
	int arry[3];
	int i;
	
	for(i=0;i<3;i++){
	printf("company name:-");
	scanf("%s",&s1.cp_name);
	printf("enter color:-");
	scanf("%s",&s1.color);
	printf("mobile modal:-");
	scanf("%d",&s1.modal);
	printf("mobile price:-");
	scanf("%d",&s1.price);
	
	}
	

	printf("=====================\n\n");
	
	
	for(i=0;i<3;i++){
	printf("company name:-%s\n",s1.cp_name);
	printf("company color:-%s\n",s1.color);
	printf("company modal:-%d\n",s1.modal);
	printf("company price:-%d",s1.price);
				
	}
	
	
	
	
	
	
	
	
}
