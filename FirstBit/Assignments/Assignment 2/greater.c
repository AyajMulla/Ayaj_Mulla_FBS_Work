#include <stdio.h>

void main()
{
   int no1,no2,no3;
   printf("Enter three numbers:");
   scanf("%d%d%d",&no1,&no2,&no3);
   
   if(no1>no2){
   	printf("Number1 is greater..");
   }
   else{
   	if(no2>no3){
   		printf("Number2 is greater..");
	}
	else{
		printf("Number3 is greater..");
	}
	
	   
   }
}