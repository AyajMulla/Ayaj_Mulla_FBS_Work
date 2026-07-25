void main(){
	
	int no,first,last,sum;
	printf("Enter Number :");
	scanf("%d",&no);
	
	last=no%10;
	while(no>=10){
		no=no/10;
		
	}
	first=no;
	sum=first+last;
	printf("Sum is %d",sum);
	

}