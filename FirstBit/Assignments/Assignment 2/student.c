
void main()
{
   int price;
   char ch;
   printf("Enter Price.:");
   scanf("%d",&price);
   printf("Are you student say y or n:");
   scanf(" %c",&ch);
   
   if(ch=='y'){
   	if(price>500){
   		printf("20%% Discount applied...");
	   }
	   
	   else{
	   	printf("10%% Discount applied..");
	   }
	   
   }
   else{
   	if(price>600){
   		printf("15%% Discount applied...");
	   }
	else{
		printf("No Discount...");
	}
   }
   
}