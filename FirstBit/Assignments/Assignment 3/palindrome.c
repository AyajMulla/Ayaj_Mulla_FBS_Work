void main(){
	
	int no,temp,rev;
	temp=no;
	int last=0;
	printf("Enter Three Digit Number :");
	scanf("%d",&no);

	
	while(no>0){
		last=no%10;
		rev=rev * 10 + last;
		no =no/10;
	
	}
	if(rev==temp){
		printf("Theis Palindrome");
	}
	else{
		printf("The is Not palindrome");
	}

}