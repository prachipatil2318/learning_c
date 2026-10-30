#include<stdio.h>
int main(){
		//1. Positive Number: Write a C program to check whether a number is positive. If positive, check whether it is even or odd.
//	int num;
//	printf("Enter the number: ");
//	scanf("%d",&num);
//	if(num>=0){
//		if(num%2==0){
//			printf("%d is Even Number\n",num);
//		}
//		else{
//			printf("%d is Odd Number\n",num);
//		}
//	}
	
		//2. Age Verification: Write a C program to check whether a person is 18 or older. If yes, check whether the person is eligible for a driving licence (age 18 or above).
//	int age;
//	printf("Enter Your age: ");
//	scanf("%d",&age);
//	if(age>0){
//		if(age>=18 && age<=100){
//			printf("As your age is %d you are eligible for a driving licence\n",age);
//		}else{
//			printf("As your age is %d you are not eligible for a driving licence\n",age);
//		}	
//	}
	
		//3. Student Result: Write a C program to check whether a student has passed (marks >= 35). If passed, check whether the student has scored distinction (marks >= 75).
//	int marks;
//	printf("Enter Your marks: ");
//	scanf("%d",&marks);
//	if(marks<=100 && marks>0)
//	{
//		if(marks>=75 && marks<=100)
//		{
//			printf("Congrats! You have passed with distinction.\n");
//		}
//		else if(marks>=35 && marks<75)
//		{
//			printf("You have passed the exam.\n");
//		}
//		else
//		{
//			printf("You are failed.\n");
//		}
//	}else{
//		printf("Invalid marks.\n");	
//	}
	

		//4. Number Comparison: Write a C program to check whether the first number is greater than the second number. If yes, check whether it is greater than 100.
//	int num1,num2;
//	printf("Enter Number 1: ");
//	scanf("%d",&num1);
//	printf("Enter Number 2: ");
//	scanf("%d",&num2);
//	if(num1>num2){
//		if(num1>100){
//			printf("%d is greater than %d and greater than 100 too.\n",num1,num2);
//		}else{
//			printf("%d is greater than %d but smaller than 100.\n",num1,num2);
//		}
//	}else{
//		printf("%d is greater than %d.\n",num2,num1);
//	}

		//5. Voting Eligibility: Write a C program to check whether a person is 18 or older. If yes, check whether the person has a valid voter ID.
//	int age1;
//	printf("Enter Your age: ");
//	scanf("%d",&age1);
//	if(age1>0){
//		if(age1>=18 && age1<=100){
//			printf("As your age is %d you must have valid voter id card \n",age1);
//		}else{
//			printf("As your age is %d you cannot have voter id card\n",age1);
//		}	
//	}
	
//Intermediate Level
		//6. ATM Machine: Check whether the ATM card is valid. If valid, check whether the PIN is correct. If correct, check whether the balance is sufficient.
//	int card,pin,balance=5000,amt;
//	printf("Enter 1 if ATM card is valid, otherwise 0: \n");
//	scanf("%d",&card);
//	if(card==1){
//		printf("Enter your pin: \n");
//		scanf("%d",&pin);
//		if(pin==1234){
//			printf("Enter amount to withdraw: \n");
//			scanf("%d",&amt);
//			if(amt<=balance){
//				int total_bal=balance-amt;
//				printf("Your total balance after withdrawal is %d \n",total_bal);
//			}else{
//				printf("Insufficient Balance. Your Balance is %d\n",balance);
//			}
//		}else{
//			printf("Pin is incorrect.\n");
//		}
//	}else{
//		printf("ATM card is not valid.\n");
//	}
	

		//7. Login System: Check whether the username is correct. If correct, check whether the password is correct. If both are correct, display "Login Successful".

//	char uname[20],pass[20];
//	printf("Enter Your username: \n");
//	scanf("%19s",&uname);
//	if(strcmp(uname,"Prachi")==0){
//		printf("Enter Your password: \n");
//		scanf("%19s",&pass);	
//		if(strcmp(pass,"Prachi123")==0){
//			printf("Login Successful.\n");
//		}
//		else{
//			printf("Password is incorrect.\n");
//		}
//	}else{
//		printf("Username is incorrect.\n");
//	}


		//8. Online Shopping: Check whether the user is logged in. If logged in, check whether the product is available. If available, check whether the payment is successful.
//	char uname[20],pass[20],isprdavailable,paymentsuccess;
//	printf("Enter Your username: \n");
//	scanf("%19s",&uname);
//	if(strcmp(uname,"Prachi")==0){
//		printf("Enter Your password: \n");
//		scanf("%19s",&pass);	
//		if(strcmp(pass,"Prachi123")==0){
//			printf("Login Successful.\n");
//			printf("Enter 1 if Product is available or 0 if not available: \n");
//			scanf("%d",&isprdavailable);
//			if(isprdavailable==1){
//				printf("Product is available!\n");
//				printf("Enter 1 if payment is successful or 0 if unsuccessful: \n");
//				scanf("%d",&paymentsuccess);
//				if(paymentsuccess==1){
//					printf("Congrats your payment is successful!\n");
//				}else{
//					printf("Sorry! Your payment is not successful!\n");
//				}
//			}else{
//				printf("Product is not available!");
//			}
//		}
//		else{
//			printf("Password is incorrect.\n");
//		}
//	}else{
//		printf("Username is incorrect.\n");
//	}


		//9. Electricity Bill: Check whether electricity consumption is greater than 100 units. If yes, check whether it is greater than 300 units.
//	int ElectConsum;
//	printf("Enter your Electricity Consumption: ");
//	scanf("%d",&ElectConsum);
//	if(ElectConsum>100){
//		if(ElectConsum>300){
//			printf("Your Electricity Consumption is more than 300 Units.\n");
//		}else{
//			printf("Your Electricity Consumption is more than 100 Units but less than 300 Units.\n");
//		}	
//	}else{
//		printf("Your Electricity Consumption is less than 100 Units.\n");
//	}

	
		//10. Employee Bonus: Check whether an employee has completed 1 year in the company. If yes, check whether their performance rating is greater than or equal to 4.
//	int yrs,rating;
//	printf("How many years have you completed in company: \n");
//	scanf("%d",&yrs);
//	if(yrs>=1){
//		printf("What is your performance rating out fro 1 to 5: \n");
//		scanf("%d",&rating);
//		if(rating>=4){
//			printf("Great your performance rating is good!\n");
//		}else{
//			printf("Your rating is less than 4. You can do better. Best Luck!\n");
//		}	
//	}else{
//		printf("You have not completed even 1 year at company.\n");
//	}
	



}
























