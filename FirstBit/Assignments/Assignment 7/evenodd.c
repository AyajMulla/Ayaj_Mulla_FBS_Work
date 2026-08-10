void main(){
	
	int arr[5];
	
	printf("Enter arr :");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<5;i++){		
		
		if(arr[i]%2==0){
			printf("\n%d Number is even\n",arr[i]);
		}
		else{
			printf("\n%d number is odd",arr[i]);
		}
	}
	
	
	
}