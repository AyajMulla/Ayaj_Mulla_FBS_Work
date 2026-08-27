struct student{
	int roll_no;
	int name[10];
	int marks;
};
void main(){
	struct student s1;
	
	s1.roll_no=101;
	strcpy(s1.name,"Ayaj");
	s1.marks=82;
	
	printf("\n Name: %s \n Roll_No: %d \n Marks: %d",s1.name,s1.roll_no,s1.marks);

}