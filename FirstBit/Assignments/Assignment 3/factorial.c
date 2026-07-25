void main(){

	int no;
	printf("Enter Number:");
	scanf("%d",&no);
	int i=1;
	int fact=1;
	
	
	while(i<=no){
		
		 fact=fact*i;
		i++;		
	}
		printf("Factorial of %d is:..",fact);
	

}