void main(){
	
	int arr[5];
	
	printf("Enter arr :");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	int ele;
	printf("Enter no to find :");
	scanf("%d",&ele);
	for(int i=0;i<5;i++){		
		if(ele==arr[i])
		printf("element %d found at %d index :",ele,i);
	}
	
	
}