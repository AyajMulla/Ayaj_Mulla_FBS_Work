 
struct salesmanager{
    int sm_id;
    int sm_name[20];
    int sm_salary;
    int sm_incentive;
    int sm_target;
};
void main(){
    
    struct salesmanager s1;
    
    printf("Enter sales manager name: ");
    scanf("%s", s1.sm_name);

    printf("Enter sales manager ID: ");
    scanf("%d", &s1.sm_id);

    printf("Enter sales manager salary: ");
    scanf("%d", &s1.sm_salary);

    printf("Enter sales manager incentive: ");
    scanf("%d", &s1.sm_incentive);

    printf("Enter sales manager target: ");
    scanf("%d", &s1.sm_target);

    

    printf("\n Name: %s \n SM_ID: %d \n SM_Salary: %d \n SM_Incentive: %d \n SM_Target: %d",s1.sm_name,s1.sm_id,s1.sm_salary,s1.sm_incentive,s1.sm_target);

}