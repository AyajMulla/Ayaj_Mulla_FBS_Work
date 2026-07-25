void main(){

	int no;
	printf("Enter Number:");
	scanf("%d",&no);
	int i=1;
	int sum=0;
	
	
	while(i<no){
		if(no%i==0){
			sum=sum+i;
		}
		i++;
				
	}
	if(sum==no){
		printf("Perfect Number..");
	}
	else{
		printf("Not Perfect Number..");
	}

}