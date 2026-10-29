//Input and Calculation Programs
#include<stdio.h>
int main(){
		//1. Write a C program to accept two numbers and calculate their addition.
	int a,b;
	printf("Enter 1st number for addition: ");
	scanf("%d",&a);
	printf("Enter 2nd number for addition: ");
	scanf("%d",&b);
	printf("Addition of %d and %d is %d\n",a,b,a+b);
	
		//2. Write a C program to accept two numbers and calculate their subtraction.
	int c,d;
	printf("Enter 1st number for subtraction: ");
	scanf("%d",&c);
	printf("Enter 2nd number for subtraction: ");
	scanf("%d",&d);
	printf("subtraction of %d and %d is %d\n",c,d,c-d);
	
		//3. Write a C program to accept two numbers and calculate their multiplication.
	int e,f;
	printf("Enter 1st number for multiplication: ");
	scanf("%d",&e);
	printf("Enter 2nd number for multiplication: ");
	scanf("%d",&f);
	printf("multiplication of %d and %d is %d\n",e,f,e*f);
	
		//4. Write a C program to accept two numbers and calculate their division.
	int g,h;
	printf("Enter 1st number for division: ");
	scanf("%d",&g);
	printf("Enter 2nd number for division: ");
	scanf("%d",&h);
	printf("division of %d and %d is %d\n",g,h,g/h);
	
		//5. Write a C program to accept length and width and calculate the area of a rectangle.
	int length,width;
	printf("Enter the length of rectangle: ");
	scanf("%d",&length);
	printf("Enter the width of rectangle: ");
	scanf("%d",&width);
	printf("Area of Rectangle who's length is %d and width is %d is: %d\n",length,width,length*width);
	
		//6. Write a C program to accept the radius of a circle and calculate its area.
	int radius;
	printf("Enter the radius of circle: ");
	scanf("%d",&radius);
	printf("Area of circle who's radius is %d is %.2f\n",radius,(3.14*radius*radius));

		//7. Write a C program to accept marks of three subjects and calculate the total marks.
	int m1,m2,m3;
	printf("Enter marks of 1st subject: ");
	scanf("%d",&m1);
	printf("Enter marks of 2nd subject: ");
	scanf("%d",&m2);
	printf("Enter marks of 3rd subject: ");
	scanf("%d",&m3);
	printf("Your total marks of all 3 subject is %d\n",m1+m2+m3);

	
	

}
