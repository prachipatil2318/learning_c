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
#include<math.h>
//No arguements/parameters & NO return Type
void greet(){
	printf("No arguements/parameters & NO return Type:- Good Afternoon!\n");
}
void add(){
	int num1=1;
	int num2=5;
	printf("No arguements/parameters & NO return Type:- Addition of %d and %d is: %d\n",num1,num2,num1+num2);
}
void sq(){
	int num=9;
	printf("No arguements/parameters & NO return Type:- Square of %d is: %d\n",num,num*num);
}

//Accept arguements/parameters but NO return Type
void addition(num1,num2){
	printf("Accept arguements/parameters but NO return Type:- Addition of %d and %d is %d\n",num1,num2,num1+num2);
}
void subtraction(num1,num2){
	printf("Accept arguements/parameters but NO return Type:- Subtraction of %d and %d is %d\n",num1,num2,num1-num2);
}
void evenodd(num){
	if(num%2==0){
		printf("Number is even!");
	}else{
		printf("Number id odd!");
	}
}


int main(){
	greet();
	add();
	sq();
	addition(99,10);
	subtraction(99,10);
	evenodd(11);
	
}
