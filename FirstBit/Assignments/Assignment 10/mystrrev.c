char* mystrrev(char* str){
	
	int i=0;
	int j=0;
	char temp;
	
	while(str[i]!='\0'){
		i++;
	}
	i--;
	
	while(j<i){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		
		j++;
		i--;
	}

	
	return str;
}

void main(){
	char str[100]="AYAJMULLA";

    mystrrev(str);

    printf("Reverse = %s",str);
}