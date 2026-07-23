void main(){
	
	int year;
	
	printf("Enter Year:");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0)
	{
		printf("Year is leap");
	}
	else{
		printf("Year is not leap");
	}
}