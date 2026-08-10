void main(){
	
	int arr[10];
	
	printf("Enter arr :");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	
	int max=arr[0];
	int min=arr[0];
	
	for(int i=0;i<10;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		 if(arr[i]<min){
			min=arr[i];
		}
	}
		
	printf("maximum element is %d :",max);
	
	printf("minimum element is %d :",min);
}