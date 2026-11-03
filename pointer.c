			// Pointer: 
				//1. Pointer is a Special type of variable. 
				//2. That store address of another variable.
				//3. It is used to print the values of ENUM datatype and in file handling, if you want to change variable name then we'll use pointer data type
				// & -> Get memory address of variable.
				// * -> Pointer symbol, get value stroed at that memory address
#include<stdio.h>
int main(){
	
	int a=10; //Normal variable
	int *p; // pointer variable
	p=&a; // Store address of 'a' in pointer variable 'p'
	printf("Value of a is: %d\n",a); // print value
	printf("Address of a is: %p\n",&a); // memory address of 'a'
	printf("Pointer p holds: %p\n",p); // pointer store address of 'a'
	printf("Value of pointer p is: %d\n",*p); // get value from address

}
	

	
	
	
	
