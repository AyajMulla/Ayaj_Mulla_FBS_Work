#include<stdlib.h>
void main(){
	
	int arr[5];
	int brr[5];
	int crr[5];
	
	*arr=malloc(sizeof(int)*5);
	*brr=malloc(sizeof(int)*5);
	*crr=malloc(sizeof(int)*5);
	
	printf("Enter arr :");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter brr :");
	for(int i=0;i<5;i++){
		scanf("%d",&brr[i]);
	}
	
	for(int i=0;i<5;i++){		
		
		crr[i]=arr[i]+brr[i];
			printf(" %d",crr[i]);
	}

	
	
}