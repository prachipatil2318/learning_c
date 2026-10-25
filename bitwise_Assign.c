#include<stdio.h>
int main(){
	
	//1. Bitwise AND (&): Problem: Declare two integer variables a = 6 and b = 3. Write a C program to perform the bitwise AND operation and display the result.
		int a=6, b=3;
		int res1=a & b; 
		printf("Result for bitwise and for 6 and 3 is: %d\n",res1);
	//2. Bitwise OR (|): Problem: Declare two integer variables a = 8 and b = 5. Write a C program to perform the bitwise OR operation and display the result.
		int c=8, d=5;
		int res2= c | d;
		printf("Result for bitwise or for 8 and 5 is: %d\n",res2);
	//3. Bitwise XOR (^): Problem: Declare two integer variables a = 12 and b = 10. Write a C program to perform the bitwise XOR operation and display the result.
		int e=12, f=10;
		int res3= e ^ f;
		printf("Result for bitwise xor for 12 and 10 is: %d\n",res3);
	//4. Bitwise NOT (~): Problem: Declare an integer variable a = 9. Write a C program to perform the bitwise NOT operation on a and display the result.
		int num1 = 9;
		printf("Result for Bitwise not for 9 is: %d\n",~num1);
	//5. Left Shift (<<): Problem: Declare an integer variable a = 7. Write a C program to shift the bits of a 2 positions to the left and display the result.
		int num2=7;
		printf("Result for left shift(2) of 7 is: %d\n",(num2<<2));
	//6. Right Shift (>>):Problem: Declare an integer variable a = 20. Write a C program to shift the bits of a 2 positions to the right and display the result.
		int num3=20;
		printf("Result for right shift(2) of 20 is: %d\n",(num2>>2));
    
}

	
	
	
	
