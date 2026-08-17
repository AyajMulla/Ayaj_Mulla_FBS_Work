#include<string.h>
void main(){
	
	char str[20];
	char str1[20];
	char str2[20];
	
	printf("Enter string 1.");
	scanf("%s",str);
	
	printf("Enter string 2.");
	scanf("%s",str1);
	
	//1 search charachter
	printf("\nsearched charachter %s\n", strchr(str, 'y'));
	
	//2 limited string join
    strncat(str1, str, 3);
    printf("\limited joined string %s",str1);
	
	//3 string length
	printf("\n%d",strlen(str));
	
	//4 copy string 
	strcpy(str2,str);
	printf("\n%s",str2);
	
	//5 join two string
	strcat(str,str1);
	printf("\n%s",str);
	
	//6 compare string
	if(strcmp(str1, str2) == 0)
    	printf("\nSame");
	else
    	printf("\nDifferent\n");
		
	//7 string reverse
	strrev(str);
	printf("\nRevered string is %s\n",str);
	
	//8 limited string copy
	strncpy(str2, str1, 3);
    str2[3] = '\0';
    printf("\nLimited Copy = %s\n", str2);
    
    //9 limited string compare
    if(strncmp(str1, str2,3) == 0)
    	printf("\nSame");
	else
    	printf("\nDifferent\n");
    	
    //10 string in string find
    char str3[] = "Hello World";

	printf("\n%s", strstr(str3, "World"));
    	

    
	
	
	
	
	
}