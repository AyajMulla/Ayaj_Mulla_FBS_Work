#include <stdio.h>
int main(){
	
	int no;
	printf("Enter Number");
	scanf("%d",&no);
	
	if(no%2==0){
		printf("The %d is Even",no);
	}
	else{
		printf("The %d is Odd",no);
	}
	return 0;
	
	}
