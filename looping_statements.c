#include<stdio.h>
	// Looping statements - Used to perform task repeat for several number of time. There are 3 types of looping statements
	//1. For Loop ->  Nested For Loop
	//2. While Loop
	//3. Do-While Loop
int main(){
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
	printf("Number are even or odd from 1 to 10 without using if statement\n");
	int num1;
	for(num1=2;num1<=10;num1+=2){
		printf("%d is Even number\n",num1);
	}
	
	
}

