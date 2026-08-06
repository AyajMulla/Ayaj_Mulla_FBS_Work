void main(){
	int num;
	int start;
	int end;
	
	printf("Enter Starting Number:");
	scanf("%d",&start);
	
	printf("Enter ending Number:");
	scanf("%d",&end);
	int i;
	int status=1;
	
	for(num=start;num<=end;num++){
	
	for(i=2;i<num;i++){
		if(num%i==0){
			printf("This is not prime number..");
			status=0;
			break;
		}
}
	if(status==1){
			printf("Prime number is %d\n",num);
		}
}
}