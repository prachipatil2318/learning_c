		// Functions: It is a block of code that performs specific task, and we can reuse it in our program
	//1. Predefined Functions: printf(), scanf(), strcpy(), strlen(s1), pow(number,2), strcmp(s1,s2), sqrt(num)
	//2. User defined function: Created by or defined by user for performing task
	//To use string function you need to call header file name strlen(),strcpy():- <string.h>, pow(),sqrt():-<math.h> 
#include<stdio.h>
#include<math.h>
int main(){
	int num1=4;
	printf("Square root of %d is: %.2f\n",num1,sqrt(num1));
	
	int num2;
	printf("Enter number to find it's power: ");
	scanf("%d",&num2);
	printf("Power of %d is: %.2f\n",num2,pow(num2,2));
	
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
