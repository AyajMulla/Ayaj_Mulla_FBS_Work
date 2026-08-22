char* mystrcpy(char* dest, char* src)
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return dest;
}

void main(){
	char src[10]="Ayaj";
	char dest[10]="";
	mystrcpy(dest,src);
	printf("Copied string = %s and %d",dest,dest);
}
