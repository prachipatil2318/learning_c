#include<stdio.h>
int main(){

		//1. Day Name: Accept a number from 1 to 7 and display the corresponding day name.
//	int day;
//	printf("Enter number from 1 to 7 for checking the corresponding day: \n");
//	scanf("%d",&day);
//	if(day>=1 && day<=7){
//		switch(day){
//			case 1:
//				printf("Monday!\n");
//				break;
//				
//			case 2:
//				printf("Tuesday!\n");
//				break;
//
//			case 3:
//				printf("Wednesday!\n");
//				break;
//
//			case 4:
//				printf("Thursday!\n");
//				break;
//
//			case 5:
//				printf("Friday!\n");
//				break;
//
//			case 6:
//				printf("Saturday!\n");
//				break;
//
//			case 7:
//				printf("Sunday!\n");
//				break;
//
//		}
//	}else{
//		printf("Number should be in between 1 to 7\n");
//	}

		//2. Month Name: Accept a number from 1 to 12 and display the month name.
//	int month;
//	printf("Enter number from 1 to 12 for checking the corresponding Month: \n");
//	scanf("%d",&month);
//	if(month>=1 && month<=12){
//		switch(month){
//			case 1:
//				printf("Jan!\n");
//				break;
//				
//			case 2:
//				printf("Feb!\n");
//				break;
//
//			case 3:
//				printf("March!\n");
//				break;
//
//			case 4:
//				printf("April!\n");
//				break;
//
//			case 5:
//				printf("May!\n");
//				break;
//
//			case 6:
//				printf("June!\n");
//				break;
//
//			case 7:
//				printf("July!\n");
//				break;
//				
//			case 8:
//				printf("Aug!\n");
//				break;
//				
//			case 9:
//				printf("Sep!\n");
//				break;
//				
//			case 10:
//				printf("Oct!\n");
//				break;
//				
//			case 11:
//				printf("Nov!\n");
//				break;
//				
//			case 12:
//				printf("Dec!\n");
//				break;
//		}
//	}else{
//		printf("Number should be in between 1 to 12\n");
//	}

		//3. Number in Words: Accept a number from 1 to 5 and display it in words (One, Two, Three, Four, Five).
//	int num;
//	printf("Enter number from 1 to 5: \n");
//	scanf("%d",&num);
//	if(num>=1 && num<=5){
//		switch(num){
//			case 1:
//				printf("One!\n");
//				break;
//				
//			case 2:
//				printf("Two!\n");
//				break;
//
//			case 3:
//				printf("Three!\n");
//				break;
//
//			case 4:
//				printf("Four!\n");
//				break;
//
//			case 5:
//				printf("Five!\n");
//				break;
//	}else{
//		printf("Number should be in between 1 to 5\n");
//	}

	
		//4. Vowel Checker: Accept an alphabet and check whether it is a vowel (a, e, i, o, u).
//	char chr;
//	printf("Enter Vowel: ");
//	scanf("%c",&chr);
//	if(chr=='a' ||chr=='e' ||chr=='i' ||chr=='o' ||chr=='u' ){
//		printf("%c is vowel.\n",chr);
//	}else{
//		printf("%c is not vowel.\n",chr);
//	}

		//5. Traffic Signal: Accept a number (1, 2, 3) and display Stop, Wait or Go.
//	int num;
//	printf("Enter number from 1 to 3: \n");
//	scanf("%d",&num);
//	if(num>=1 && num<=3){
//		switch(num){
//			case 1:
//				printf("Stop!\n");
//				break;
//				
//			case 2:
//				printf("Wait!\n");
//				break;
//
//			case 3:
//				printf("Go!\n");
//				break;
//	}
//	}else{
//		printf("Number should be in between 1 to 3\n");
//	}


		//6. Grade Message: Accept a grade (A, B, C, D, F) and display the corresponding performance message.
//	char grade;
//	printf("Enter your grade (A, B, C, D, F): \n");
//	scanf("%c",&grade);
//	if(grade=='A' || grade<='B' || grade<='C' || grade<='D' || grade<='E' || grade<='F'){
//		switch(grade){
//			case 'A':
//				printf("Distinction!\n");
//				break;
//				
//			case 'B':
//				printf("Excellent!\n");
//				break;
//
//			case 'C':
//				printf("Performed well!\n");
//				break;
//
//			case 'D':
//				printf("Very Good!\n");
//				break;
//
//			case 'E':
//				printf("Good!\n");
//				break;
//
//			case 'F':
//				printf("Failed!\n");
//				break;
//	}else{
//		printf("Your grade should be from A, B, C, D, F \n");
//	}
		
		
		//7. Menu Selection: Display 1 = Tea, 2 = Coffee, 3 = Milk and display the selected drink.
//	int num;
//	printf("Enter number from 1 to 3: \n");
//	scanf("%d",&num);
//	if(num>=1 && num<=3){
//		switch(num){
//			case 1:
//				printf("Tea!\n");
//				break;
//				
//			case 2:
//				printf("Coffee!\n");
//				break;
//
//			case 3:
//				printf("Milk!\n");
//				break;
//	}
//	}else{
//		printf("Number should be in between 1 to 3\n");
//	}


		//8. Simple Calculator: Accept two numbers and perform addition, subtraction, multiplication or division based on the user's choice.
//	int choice,num1,num2,res;
//	printf("Enter 1 for Addition \n");
//	printf("Enter 2 for Subtraction \n");
//	printf("Enter 3 for Multiplication \n");
//	printf("Enter 4 for Division \n");
//	printf("Enter 5 for Modulus \n");
//	printf("Enter 6 for NONE \n");
//	scanf("%d",&choice);
//	switch(choice)
//	{
//		case 1:	
//			printf("Enter num1: ");
//			scanf("%d",&num1);
//			printf("Enter num2: ");
//			scanf("%d",&num2);
//			res=num1+num2;
//			printf("Result is: %d\n",res);
//			break;
//		
//		case 2:
//			printf("Enter num1: ");
//			scanf("%d",&num1);
//			printf("Enter num2: ");
//			scanf("%d",&num2);
//			res=num1-num2;
//			printf("Result is: %d\n",res);
//			break;
//		
//		case 3:	
//			printf("Enter num1: ");
//			scanf("%d",&num1);
//			printf("Enter num2: ");
//			scanf("%d",&num2);
//			res=num1*num2;
//			printf("Result is: %d\n",res);
//			break;
//		
//		case 4:	
//			printf("Enter num1: ");
//			scanf("%d",&num1);
//			printf("Enter num2: ");
//			scanf("%d",&num2);
//			res=num1/num2;
//			printf("Result is: %d\n",res);
//			break;
//		
//		case 5:	
//			printf("Enter num1: ");
//			scanf("%d",&num1);
//			printf("Enter num2: ");
//			scanf("%d",&num2);
//			res=num1%num2;
//			printf("Result is: %d\n",res);
//			break;
//		
//		default:
//			break;
//		
//	}


		//9. Area Calculator: Display options to calculate the area of a circle, square and rectangle.
//	int choice,r,side,l,b;
//	printf("Enter 1 for finding area of circle, 2 for calculating area of square and 3 for area of rectangle: \n");
//	scanf("%d",&choice);
//	if(choice>=1 && choice<=3){
//		switch(choice){
//			case 1: 
//				
//				printf("Enter Radius of circle: \n");
//				scanf("%d",&r);
//				printf("Area of circle is %.2f\n",3.14*r*r);
//				break;
//			case 2:
//				
//				printf("Enter side of square: \n");
//				scanf("%d",&side);
//				printf("Area of square is %d.\n",side*side);
//				break;
//			case 3:
//				
//				printf("Enter length of rectangle: \n");
//				scanf("%d",&l);
//				printf("Enter width of rectangle: \n");
//				scanf("%d",&b);
//				printf("Area of Rectangle is %d.\n",l*b);
//				break;
//			
//		}
//	}else{
//		printf("Number should be in between 1 to 3\n");
//	}


		//10. Food Ordering: Display a menu of Pizza, Burger, Sandwich and Coffee. Accept the user's choice and display the selected item.
//	int choice;
//    printf("1. Pizza\n");
//    printf("2. Burger\n");
//    printf("3. Sandwich\n");
//    printf("4. Coffee\n");
//    printf("Enter your choice: ");
//    scanf("%d", &choice);
//	if(num>=1 && num<=4){
//		switch(num){
//			case 1:
//				printf("Pizza!\n");
//				break;
//				
//			case 2:
//				printf("Burger!\n");
//				break;
//
//			case 3:
//				printf("Sandwich!\n");
//				break;
//			case 4:
//				printf("Coffee!\n");
//				break;
//	}
//	}else{
//		printf("Choice should be in between 1 to 4\n");
//	}

		

}




