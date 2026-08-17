
	
void vow(char* ch){
	
	
	if(*ch=='a'|| *ch=='e' || *ch=='i' || *ch=='o' || *ch=='u')
		printf("This is vowel :");
	
	else
			printf("This is constant :");
	
}

int main(){
	
	
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);
	
	 vow(&ch);

}
