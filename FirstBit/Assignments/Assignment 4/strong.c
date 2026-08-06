#include <stdio.h>

void main()
{
	int start,end;
    int num, temp, digit;
    int sum,i,fact;
  
  	printf("Enter Starting Number: ");
    scanf("%d", &start);

    printf("Enter Ending Number: ");
    scanf("%d", &end);
	
	for(num=start;num<=end;num++){
	
	temp=num;
	sum=0;
	
    while(temp > 0)
    {
        digit = temp % 10;

        fact = 1;
        i = 1;

        while(i <= digit)
        {
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == num)
    {
        printf("Strong Number are %d\n",num);
    }

}
}