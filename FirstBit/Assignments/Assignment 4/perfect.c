void main(){

  	int start, end;
    int num, i, sum;

    printf("Enter Starting Number: ");
    scanf("%d", &start);

    printf("Enter Ending Number: ");
    scanf("%d", &end);
	
	for(num=start;num<=end;num++){
		
		sum=0;
		i=1;
		
	while(i<num){
		if(num%i==0){
			sum=sum+i;
		}
		i++;			
	}
	
	if(sum==num){
		printf("Perfect Number are %d \n",num);
	}

}
}