
void prime(int* no){
	
	int i=2;
	int status=0;
	
	for(i=2; i<(*no);i++){
		if(*no%i==0){
		
			status=1;
			break;
		}
	}	
if(status==1)
		printf("Not prime");
	else
		printf("prime");
}

void main(){	
	int no;
	printf("Enter Number:");
	scanf("%d",&no);
	prime(&no);
	
}
