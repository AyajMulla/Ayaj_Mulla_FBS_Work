void main(){
	
	float basic_salary, total_salary,da,ta,hra;
	
	printf("Enter Basic salary :");
	scanf("%f",&basic_salary);
	
	if(basic_salary<=5000)
	{
		da=basic_salary * 0.10;
		ta=basic_salary * 0.20;
		hra=basic_salary * 0.25;
	}
	else{
		da=basic_salary * 0.15;
		ta=basic_salary * 0.25;
		hra=basic_salary * 0.30;
		
	}
	total_salary=basic_salary+da+ta+hra;
	printf("Total salary %f :",total_salary);
	
}