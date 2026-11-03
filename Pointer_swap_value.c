#include<stdio.h>
int main(){
	
	int a=10; //Normal variable
	int *p=&a; // pointer variable & Store address of 'a' in pointer variable 'p'
	*p=20; // change the value using pointer
	printf("Value of a is: %d\n",a); // print value
}
