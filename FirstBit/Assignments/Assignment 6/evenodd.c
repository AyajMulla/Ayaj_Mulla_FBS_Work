void evenodd(int* no){
	if(*no%2==0)
		printf("even");
	else
		printf("odd");
}
void main(){
	
	int no;
	printf("Enter Number:");
	scanf("%d",&no);
	
	evenodd(&no);
	
		
}

