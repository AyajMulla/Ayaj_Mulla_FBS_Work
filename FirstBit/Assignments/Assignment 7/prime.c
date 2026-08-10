void main(){
	
	int arr[5];
	
	printf("Enter arr :");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<5;i++){		
		int flag=0;
		
		for(int j=2;j<arr[i];j++){		
			if(arr[i]%j==0){
			flag=1;
			break;
		}
	}
 		if(flag == 0 && arr[i] > 1)
            printf("%d is prime\n", arr[i]);
        
	
}
	
}