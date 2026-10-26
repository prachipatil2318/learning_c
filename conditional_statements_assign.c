#include<stdio.h>
    //If Statement Practice Questions
    //1. Write a C program to check whether a person is eligible to vote (age should be 18 or above).
    //2. Write a C program to check whether a number is positive.
    //3. Write a C program to check whether a student has passed (marks should be 35 or above).
    //4. Write a C program to check whether a person is eligible for a driving licence (age should be 18 or above).
    //5. Write a C program to check whether the temperature is greater than 30 degrees.
    //6. Write a C program to check whether a product price is greater than ?1,000.
int main()
{
	//1. Write a C program to check whether a person is eligible to vote (age should be 18 or above).
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are eligible to vote! \n");
	}
    //2. Write a C program to check whether a number is positive.
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	if(num>=0){
		printf("Number is positive! \n");
	}
    //3. Write a C program to check whether a student has passed (marks should be 35 or above).
	int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
	if(marks>=35){
		printf("You have passed the exam! \n");
	}
    //4. Write a C program to check whether a person is eligible for a driving licence (age should be 18 or above).
	int age1;
	printf("Enter your age: ");
	scanf("%d",&age1);
	if(age1>=18)
	{
		printf("You are eligible for a driving licence! \n");
	}
    //5. Write a C program to check whether the temperature is greater than 30 degrees.
	int temp;
	printf("Enter Temperature: ");
	scanf("%d",&temp);
	if(marks>30){
		printf("Temperature is greater than 30! \n");
	}
    //6. Write a C program to check whether a product price is greater than ?1,000.
	int price;
	printf("Enter the price: ");
	scanf("%d",&price);
	if(price>1000){
		printf("Price is greater than 1,000! \n");
	}
  
}
