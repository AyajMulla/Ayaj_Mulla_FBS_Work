void main(){
	
	char vowel;
	
	printf("Enter Vowel:");
	scanf("%c",&vowel);
	
	if(vowel=='a'|| vowel=='e' || vowel=='i' || vowel=='o' || vowel=='u')
	{
		printf("This %c is vowel :",vowel);
	}
	else{
		printf("This %c is consonant",vowel);
	}
}