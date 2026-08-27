struct hr{
	int hr_id;
	int hr_name[20];
	float hr_salary;
	int hr_commission;
};
void main(){
	struct hr s1;
	
	printf("Enter hr name: ");
	scanf("%s", s1.hr_name);

	printf("Enter hr ID: ");
	scanf("%d", &s1.hr_id);

	printf("Enter hr salary: ");
	scanf("%f", &s1.hr_salary);

	printf("Enter hr commission: ");
	scanf("%d", &s1.hr_commission);

	

	printf("\n Name: %s \n HR_ID: %d \n HR_Salary: %.2f \n HR_Commission: %d",s1.hr_name,s1.hr_id,s1.hr_salary,s1.hr_commission);

}