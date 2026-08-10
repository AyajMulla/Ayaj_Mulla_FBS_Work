void add();
void main(){
	
	int no1,no2;
	printf("Enter two no");
	scanf("%d%d",&no1,&no2);
	
	add(&no1,&no2);
	add(60,70);
	
}

void add(int* x, int* y){
	int res= *x+*y;
	printf("%d ",res);
	printf("memory address of no1=%d no2=%d\n",&x,&y);
}