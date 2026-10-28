#include<stdio.h>
	// Looping statements - Used to perform task repeat for several number of time. There are 3 types of looping statements
	//1. For Loop ->  Nested For Loop
	//2. While Loop
	//3. Do-While Loop
int main(){
//	------------------------------------------------------------------	
		// 1. For Loop
	//1- Number from 1 to 10
	printf("Number from 1 to 10 \n");
	int a;
	for(a=1;a<=10;a++){
		printf("Value: %d\n",a);
	}
	//2- Multiplication table
	printf("---------------------------------------\n");
	int num;
	printf("Enter the number who's table you want: ");
	scanf("%d",&num);
	int i;
	printf("Multiplication Table of %d\n",num);
	for(i=1;i<=10;i++){
		printf("%d X %d = %d\n",num,i,i*num);
	}
	//3- Print the square of number from 1 to 5
	printf("---------------------------------------\n");
	printf("square of number from 1 to 5\n");
	int number;
	for(number=1;number<=5;number++){
		printf("%d -> %d\n",number,number*number);
	}
	//4- Number from 5 to 1
	printf("---------------------------------------\n");
	printf("Number from 5 to 1\n");
	int a1;
	for(a1=5;a1>=1;a1--){
		printf("Value: %d\n",a1);
	}
	//5- Check if number are even or odd from 1 to 10 using if statement
	printf("---------------------------------------\n");
	printf("Number are even or odd from 1 to 10 using if statement\n");
	int n1;
	for(n1=1;n1<=10;n1++)
	{
		if(n1%2==0)
		{
			printf("%d is Even Number\n",n1);
		}
		else
		{
			printf("%d is odd Number\n",n1);
		}
	}
	//6- Check if number are even or odd from 1 to 10 without using if statement
	printf("---------------------------------------\n");
	printf("Number are even from 1 to 10 without using if statement\n");
	int num1;
	for(num1=2;num1<=10;num1+=2){
		printf("%d is Even number\n",num1);
	}
	//7- Calculate sum of all numbers from 1 to 5 for eg: 1+2+3+4+5=15 
	printf("---------------------------------------\n");
	printf("sum of all numbers from 1 to 5 is: ");
	int number1;
	int sum=0;
	for(number1=1;number1<=5;number1++){
		sum+=number1;
	}
	printf("%d\n",sum);
	//8- Fibonacci series
	int number2,fact=1;
	printf("Enter the number: ");
	scanf("%d",&number2);
	for(i=1;i<=number2;i++){
		fact*=i;
	}
	printf("Factorial is: %d\n",fact);
	//9- Write a C program to print number between 1 to 50 which are divisible by 5
	int number3;
	for(number3=1;number3<=50;number3++){
		if(number3%5==0){
			printf("%d\n",number3);
		}
	}
	
	
//	------------------------------------------------------------------	
		// Nested For Loop - Pattern Printing Questions
//	int x,y;
//	for(x=1;x<=4;x++){
//		for(y=1;y<=4;y++){			// ****
//			printf("*");			// ****
//		}							// ****
//		printf("\n");				// ****
//	}
	
//	int x,y;
//	for(x=1;x<=5;x++){				// *****
//		for(y=x;y<=5;y++){			// ****
//			printf("*");			// ***
//		}							// **	
//		printf("\n");				// *
//	}

	int count=1,i,j;				// 123
	for(i=1;i<=3;i++){				// 456
		for(j=1;j<=3;j++){			// 789
			printf("%d",count);		
			count++;				
		}
		printf("\n");
	}
}

