#include<stdio.h>
void main(){
	
	int start;
	int end;
	
	printf("Enter Starting Number:");
	scanf("%d",&start);
	
	printf("Enter ending Number:");
	scanf("%d",&end);
	
	int num;
	int sum,temp;
	for(num=start;num<=end;num++){
		
		temp=num;
		sum=0;
		
		while(temp>0){
		
		int lastno = temp%10;
		sum = sum+(lastno*lastno*lastno);
		temp=temp/10;
		}
		
		if(sum==num){
				printf("armstrong number are %d\n",num);
		}
		
	}
	
}