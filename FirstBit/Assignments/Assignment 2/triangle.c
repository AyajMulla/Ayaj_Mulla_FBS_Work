#include <stdio.h>

void main()
{
    int side1, side2, side3;


    printf("Enter Three Sides of triangle:");
    scanf("%d%d%d", &side1, &side2,&side3);
    
    if(side1==side2 && side2==side3){
		printf("This is Equilateral Triangle");
	}
	
	else{
		if(side1==side2 || side2==side3 || side1==side3){
		printf("This is Isosceles Triangle..");
	}
		else{
			if(side1!=side2 && side2!=side3 && side1!=side3){
				printf("This is Scalene Triangle");
			}
			else{
				printf("You entered wrong input..");
			}
		}
	}

   
}