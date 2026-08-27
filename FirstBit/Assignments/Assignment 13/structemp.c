struct employee{
	int emp_id;
	int emp_name[20];
	int emp_salary;
};
void main(){
	struct employee s1;
	
	printf("Enter employee name: ");
	scanf("%s", s1.emp_name);

	printf("Enter employee ID: ");
	scanf("%d", &s1.emp_id);

	printf("Enter employee salary: ");
	scanf("%d", &s1.emp_salary);

	printf("\n Name: %s \n Emp_ID: %d \n Emp_Salary: %d",s1.emp_name,s1.emp_id,s1.emp_salary);

}