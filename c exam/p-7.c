#include<stdio.h>
main(){
	
	FILE*fp;
	fp=fopen("file.txt","w");
	
	if(fp!=NULL){
		printf("file open\n");
		
		fprintf(fp,"Hello world");
		
	}
	else{
		printf("file dose not open");
	}
	
	fp=fopen("file.txt","r");
	
	fp=fopen("fpo.txt","w");
	
	if(fp!=NULL)
	{
		printf("file open");
		
	}
	else{
		printf("file dose not open");
	}
	
}
