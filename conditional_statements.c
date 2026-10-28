#include<stdio.h>
	// Control Flow Statement/ Control Flow Statements/ Decision Makeing Statements
	// 5 Types of Conditional Statements :
	// 1. IF 
	// 2. IF ELSE 
	// 3. IF ELSE Ladder
	// 4. NESTED IF 
	// 5. SWITCH STATEMENTS
	// scanf() - it is function used to take input from user, predefined function
int main(){
	// 1. IF 	
	int age1=30;
	if(age1>18){
	printf("Eligible to Vote because age is %d!!\n",age1);
	}
//	---------------------------	
	// 2. IF ELSE
	int age2=10;
	if(age2>18){
	printf("Eligible to Vote because age is %d!!\n",age2);
	}else{
	printf("Not Eligible to Vote because age is %d!!\n",age2);		
	}
//	---------------------------	
	// 3. IF ELSE Ladder
	int number1=-567;
	if(number1>=0 && number1<=10){
		printf("Number is in between 0 to 10!! Number is: %d \n",number1);
	}
	else if(number1>10 && number1<=20){
		printf("Number is in between 10 to 20!! Number is: %d  \n",number1);
	}
	else if(number1>20 && number1<=30){
		printf("Number is in between 20 to 30!! Number is: %d  \n",number1);
	}
	else if(number1>30 && number1<=40){
		printf("Number is in between 30 to 40!! Number is: %d  \n",number1);
	}
	else if(number1>40 && number1<=50){
		printf("Number is in between 40 to 50!! Number is: %d  \n",number1);
	}
	else if(number1>50 && number1<=100){
		printf("Number is in between 50 to 100!! Number is: %d  \n",number1);
	}
	else if(number1>100){
		printf("Number is greater than 100!! Number is: %d  \n",number1);
	}
	else{
		printf("Number is INVALID!! Number is: %d  \n",number1);	
	}
//	---------------------------	 
	// 4. NESTED IF 
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if (num>=0){
		if(num<=10){
			printf("Number is positive and in between 0 to 10. Number is: %d\n",num);
		}else{
			printf("Number is positive and is greater than 10. Number is: %d\n",num);
		}
	}else{
		printf("Number is negative and is less than 0. Number is: %d\n",num);
	}
	
	int pin=1234;
	int balance=2000;
	int total_bal=0;
	int amt;
	printf("Enter the amount: \n");
	scanf("%d",&amt);
	if(pin==1234){
		if(amt>2000){
			printf("Insufficient balance! \n");
			printf("Balance is %d\n",balance);
		}else{
			total_bal=balance-amt;
			printf("Current Balance is %d\n",balance);	
		}
	}else{
		printf("Your pin is Wrong!");

	}
	
//	---------------------------	 
	// 5. Switch Statements
	int choice,num1,num2,res;
	printf("Enter 1 for Addition \n");
	printf("Enter 2 for Subtraction \n");
	printf("Enter 3 for Multiplication \n");
	printf("Enter 4 for Division \n");
	printf("Enter 5 for Modulus \n");
	printf("Enter 6 for NONE \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:	
			printf("Enter num1: ");
			scanf("%d",&num1);
			printf("Enter num2: ");
			scanf("%d",&num2);
			res=num1+num2;
			printf("Result is: %d\n",res);
			break;
		
		case 2:
			printf("Enter num1: ");
			scanf("%d",&num1);
			printf("Enter num2: ");
			scanf("%d",&num2);
			res=num1-num2;
			printf("Result is: %d\n",res);
			break;
		
		case 3:	
			printf("Enter num1: ");
			scanf("%d",&num1);
			printf("Enter num2: ");
			scanf("%d",&num2);
			res=num1*num2;
			printf("Result is: %d\n",res);
			break;
		
		case 4:	
			printf("Enter num1: ");
			scanf("%d",&num1);
			printf("Enter num2: ");
			scanf("%d",&num2);
			res=num1/num2;
			printf("Result is: %d\n",res);
			break;
		
		case 5:	
			printf("Enter num1: ");
			scanf("%d",&num1);
			printf("Enter num2: ");
			scanf("%d",&num2);
			res=num1%num2;
			printf("Result is: %d\n",res);
			break;
		
		default:
			break;
		
	}
	
	
	
	
	
//	---------------------------	
	// Demo scanf
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Your age is %d\n",age);
	
	float sal;
	printf("Enter your salary: ");
	scanf("%f",&sal);
	printf("Your salary is %.2f\n",sal);
	
	char name[10];
	printf("Your name is: ");
	scanf("%s",&name);
	printf("Your name is %s\n ",name);

}
