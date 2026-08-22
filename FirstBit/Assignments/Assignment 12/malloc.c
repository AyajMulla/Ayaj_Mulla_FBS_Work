#include<stdlib.h>


char* mystrdup(char* str){
	char* ptr=(char*)malloc(sizeof(char)*10);
	
	for(int i=0;i<10;i++){
		ptr[i]=str[i];
	}
		return ptr;
}
void main(){
	
	char str[10]="Ayaj";
	
	char* ptr=mystrdup(str);
	printf("str=%s",str);
	printf("ptr=%s",ptr);
}