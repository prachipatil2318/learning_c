#include<stdio.h>
	// Control Flow Statement/ Control Flow Statements/ Decision Makeing Statements
	// 5 Types of Conditional Statements :
	// 1. IF 
	// 2. IF ELSE 
	// 3. ELSE IF
	// 4. NESTED IF ELSE
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
	// 3. ELSE IF
	int num1=-567;
	if(num1>=0 && num1<=10){
		printf("Number is in between 0 to 10!! Number is: %d \n",num1);
	}
	else if(num1>10 && num1<=20){
		printf("Number is in between 10 to 20!! Number is: %d  \n",num1);
	}
	else if(num1>20 && num1<=30){
		printf("Number is in between 20 to 30!! Number is: %d  \n",num1);
	}
	else if(num1>30 && num1<=40){
		printf("Number is in between 30 to 40!! Number is: %d  \n",num1);
	}
	else if(num1>40 && num1<=50){
		printf("Number is in between 40 to 50!! Number is: %d  \n",num1);
	}
	else if(num1>50 && num1<=100){
		printf("Number is in between 50 to 100!! Number is: %d  \n",num1);
	}
	else if(num1>100){
		printf("Number is greater than 100!! Number is: %d  \n",num1);
	}
	else{
		printf("Number is INVALID!! Number is: %d  \n",num1);	
	}
//	---------------------------	 
	// 4. NESTED IF ELSE
	


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
