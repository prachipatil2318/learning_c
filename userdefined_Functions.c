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
//1. No arguements/parameters & NO return Type
void greet(){
	printf("No arguements/parameters & NO return Type:- Good Afternoon!\n");
}
void add1(){
	int num1=1;
	int num2=5;
	printf("No arguements/parameters & NO return Type:- Addition of %d and %d is: %d\n",num1,num2,num1+num2);
}
void sq(){
	int num=9;
	printf("No arguements/parameters & NO return Type:- Square of %d is: %d\n",num,num*num);
}

//2. Accept arguements/parameters but NO return Type
void addition(num1,num2){
	printf("Accept arguements/parameters but NO return Type:- Addition of %d and %d is %d\n",num1,num2,num1+num2);
}
void subtraction(num1,num2){
	printf("Accept arguements/parameters but NO return Type:- Subtraction of %d and %d is %d\n",num1,num2,num1-num2);
}
void evenodd(num){
	if(num%2==0){
		printf("Accept arguements/parameters but NO return Type:- %d is even!\n",num);
	}else{
		printf("Accept arguements/parameters but NO return Type:-%d is odd!\n",num);
	}
}
void table(num){
	int i;
	printf("Accept arguements/parameters but NO return Type:- \n");
	for(i=1;i<=10;i++){
		printf("%d\n",num*i);
	}
}

//3. NO arguements/parameters but Accept return Type
int add2(){
	int a=11;
	int b=19;
	return a+b;
}
int mul(){
	int a=11;
	int b=19;
	return a*b;
}

//4. Accept arguements/parameters & Accept return Type
int sub(int a,int b){
	return a-b;
}
int add(int a,int b){
	return a+b;
}

int main(){
	greet();
	add1();
	sq();
	printf("\n");
	addition(99,10);
	subtraction(99,10);
	evenodd(11);
	table(2);
	printf("\n");
	printf("NO arguements/parameters but Accept return Type:- Addition is: %d\n",add2());
	printf("NO arguements/parameters but Accept return Type:- Multiplication is: %d\n",mul());
	printf("\n");
	printf("Accept arguements/parameters & Accept return Type:- Subtraction is: %d\n",sub(10,2));
	printf("Accept arguements/parameters & Accept return Type:- Addition is: %d\n",add(10,2));

}
