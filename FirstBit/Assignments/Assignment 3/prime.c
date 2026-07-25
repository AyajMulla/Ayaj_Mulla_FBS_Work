void main(){

	int no;
	printf("Enter Number:");
	scanf("%d",&no);
	int i=2;
	
	while(i<no){
		if(no%i==0){
			printf("number is not prime..");
		}
		i++;
				
	}
		printf("Number is prime..");
}