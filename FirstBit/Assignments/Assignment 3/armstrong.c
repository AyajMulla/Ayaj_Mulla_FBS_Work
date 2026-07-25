void main(){

	int no;
	printf("Enter Number:");
	scanf("%d",&no);
	int temp=no;
	int sum=0;
	
	while(no>0){
		int lastno = no%10;
		sum = sum+(lastno*lastno*lastno);
		no=no/10;
		
	

}
	if(sum==temp){
		printf("armstrong number..");
	}
	else{
		printf("not armstrong number..");
	}

}