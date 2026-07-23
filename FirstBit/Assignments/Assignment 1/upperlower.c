void main(){
	
	char ch;
	
	printf("Enter character:");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("%c is in lowercase",ch);
	}
	else{
		printf("%c is in uppercase",ch);
	}
}