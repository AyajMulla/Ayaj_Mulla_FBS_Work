struct admin{
	int admin_id;
	int admin_name[20];
	int admin_salary;
	int admin_allowance;
};
void main(){
	struct admin s1;
	
	printf("Enter admin name: ");
	scanf("%s", s1.admin_name);

	printf("Enter admin ID: ");
	scanf("%d", &s1.admin_id);

	printf("Enter admin salary: ");
	scanf("%d", &s1.admin_salary);

	printf("Enter admin allowance: ");
	scanf("%d", &s1.admin_allowance);

	printf("\n Name: %s \n Admin_ID: %d \n Admin_Salary: %d \n Admin_Allowance: %d",s1.admin_name,s1.admin_id,s1.admin_salary,s1.admin_allowance);

}