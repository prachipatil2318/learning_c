		//User defined Function
			//1. NO arguements/parameters & NO return Type
			//2. Accept arguements/parameters but NO return Type
			//3. NO arguements/parameters but Accept return Type
			//4. Accept arguements/parameters & Accept return Type
				//Syntax
			//Function Defination
			//Function Declaration/prototype
			//Function Call
			
			//Header File
			//returntype func_name()
			//{ (Function Defination)
				//Body of function	
			//}
			//int main()
			//{
				//call function
			//}
			
#include<stdio.h>
//No arguements/parameters & NO return Type
void greet(){
	printf("Good Afternoon!\n");
}
void add(){
	int num1=10;
	int num2=5;
	printf("Addition of %d and %d is: %d\n",num1,num2,num1+num2);
}

int main(){
	greet();
	add();
}
