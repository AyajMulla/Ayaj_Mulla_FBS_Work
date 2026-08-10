void facto(int* no){
	
	int fact=1;
	
	
	while(*no>0){
		
		 fact=fact * (*no);
		(*no)--;		
	}
	
	printf("Factorial is %d..",fact);
	
	
}


void main(){
	int no;
	printf("Enter Number:");
	scanf("%d",&no);
	facto(&no);
	
	
}

