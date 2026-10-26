#include<stdio.h>
    //If Statement Practice Questions
    //1. Write a C program to check whether a person is eligible to vote (age should be 18 or above).
    //2. Write a C program to check whether a number is positive.
    //3. Write a C program to check whether a student has passed (marks should be 35 or above).
    //4. Write a C program to check whether a person is eligible for a driving licence (age should be 18 or above).
    //5. Write a C program to check whether the temperature is greater than 30 degrees.
    //6. Write a C program to check whether a product price is greater than ?1,000.
    
    //If Else Statement Practice Questions
    //7. Write a C program to check whether a number is even or odd.
    //8. Write a C program to check whether a person is eligible to vote or not.
    //9. Write a C program to check whether a student has passed or failed.
    //10. Write a C program to check whether a number is positive or negative.
    //11. Write a C program to check whether a person is eligible for a driving licence or not.
    //12. Write a C program to check whether the entered password is correct or incorrect.
    //13. Write a C program to check whether a number is divisible by 5 or not.
    //14. Write a C program to check whether two numbers are equal or not.
int main()
{
	// //1. Write a C program to check whether a person is eligible to vote (age should be 18 or above).
	 int age;
	 printf("Enter your age: ");
	 scanf("%d",&age);
	 if(age>=18)
	 {
	 	printf("You are eligible to vote! \n");
	 }
    // //2. Write a C program to check whether a number is positive.
	 int num;
	 printf("Enter number: ");
	 scanf("%d",&num);
	 if(num>=0){
	 	printf("Number is positive! \n");
	 }
    // //3. Write a C program to check whether a student has passed (marks should be 35 or above).
	 int marks;
	 printf("Enter marks: ");
	 scanf("%d",&marks);
	 if(marks>=35){
	 	printf("You have passed the exam! \n");
	 }
    // //4. Write a C program to check whether a person is eligible for a driving licence (age should be 18 or above).
	 int age1;
	 printf("Enter your age: ");
	 scanf("%d",&age1);
	 if(age1>=18)
	 {
	 	printf("You are eligible for a driving licence! \n");
	 }
    // //5. Write a C program to check whether the temperature is greater than 30 degrees.
	 int temp;
	 printf("Enter Temperature: ");
	 scanf("%d",&temp);
	 if(marks>30){
	 	printf("Temperature is greater than 30! \n");
	 }
    // //6. Write a C program to check whether a product price is greater than ?1,000.
	 int price;
	 printf("Enter the price: ");
	 scanf("%d",&price);
	 if(price>1000){
	 	printf("Price is greater than 1,000! \n");
	 }
    // //7. Write a C program to check whether a number is even or odd.
	 int number;
	 printf("Enter number: ");
	 scanf("%d",&number);
	 if(number%2==0){
	 	printf("Number is even! \n");
	 }else{
	 	printf("Number is odd! \n");	
	 }
    // //8. Write a C program to check whether a person is eligible to vote or not.
	 int age2;
	 printf("Enter your age: ");
	 scanf("%d",&age2);
	 if(age2>=18)
	 {
	 	printf("You are eligible to vote! \n");
	 }else{
	 	printf("You are not eligible to vote! \n");
	 }
    // //9. Write a C program to check whether a student has passed or failed.
	 int marks1;
	 printf("Enter marks: ");
	 scanf("%d",&marks1);
	 if(marks1>=35){
	 	printf("You have passed the exam! \n");
	 }else{
	 	printf("You have fail the exam! \n");
	 }
    // //10. Write a C program to check whether a number is positive or negative.
	 int num2;
	 printf("Enter number: ");
	 scanf("%d",&num2);
	 if(num2>=0){
	 	printf("Number is positive! \n");
	 }else{
	 	printf("Number is negative! \n");	
	 }
	//12. Write a C program to check whether the entered password is correct or incorrect.
//	char password[10]="Prachi123";
//	char pass[10];
//	printf("Enter Password: ");
//	scanf("%s",&pass);
//	if(pass==password){
//		printf("Correct password!");
//	}else{
//		printf("Incorrect password!");
//	}
	
	
	
    //13. Write a C program to check whether a number is divisible by 5 or not.
	  int number2;
		printf("Enter number: ");
		scanf("%d",&number2);
		if(number2%5==0){
			printf("Number is divisible by 5! \n");
		}else{
			printf("Number is not divisible by 5! \n");	
		}
	
    //14. Write a C program to check whether two numbers are equal or not.
	 int a;
	 int b;
	 printf("Enter number 1: ");
	 scanf("%d",&a);
	 printf("Enter number 2: ");
	 scanf("%d",&b);
	 if(a==b){
	 		printf("Number are equal!");
	 }else{
			printf("Number are not equal!");
	 }

	
	
	
	
}
