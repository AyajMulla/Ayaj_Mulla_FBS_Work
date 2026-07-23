#include <stdio.h>
int main(){
	
	int no,first,last;
	printf("Enter Three Digit Number :");
	scanf("%d",&no);
	
	first =no/100;
	last= no%10;
	
	if(first==last){
		printf("The %d is Palindrome",no);
	}
	else{
		printf("The %d is Not palindrome",no);
	}
	return 0;
	
	}
