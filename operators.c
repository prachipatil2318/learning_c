#include<stdio.h>
	//Operators	- To perform mathematical operation, Check relation, assign values, compare values we use operators.
	//1. Arithematic Operator : +, -, *, /, %
	//2. Relation Operator : <, >,<=, >=, ==, != 
	//3. Logical Operator : AND-&&, OR-||, NOT-!
	//4. Assignment Operator : +=, -=, *=, /=, %=
	//5. Increment & Decrement Operator : var++, var--
//	---------------------------
int main(){
	//1. Arithematic Operator : +, -, *, /, %
	int a=10, b=20;
	int add=a+b;
	printf("Addition : %d\n",add);
	
	int sub=b-a;
	printf("Subtraction : %d\n",sub);

	int mul=a*b;
	printf("Multiplication : %d\n",mul);

	int div=a/b;
	printf("Division : %d\n",div);
	
	int mod=a%b;
	printf("Modulus : %d\n",mod);
//	---------------------------	
	//2. Relation Operator : <, >,<=, >=, ==, != 
	int num1=10, num2=20;
	printf("\n");

	printf("num1<num2: %d\n",num1<num2); //t - 1
	printf("num2<num1: %d\n",num2<num1); //f - 0
	printf("\n");

	printf("num1<=num2: %d\n",num1<=num2);//t - 1
	printf("num2<=num1: %d\n",num2<=num1);//f - 0
	printf("\n");
	
	printf("num1>num2: %d\n",num1>num2);//f - 0
	printf("num2>num1: %d\n",num2>num1);//t - 1
	printf("\n");

	printf("num1>=num2: %d\n",num1>=num2);//f - 0
	printf("num2>=num1: %d\n",num2>=num1);//t - 1
	printf("\n");

	printf("num1==num2: %d\n",num1==num2);//f - 0
	printf("num2==num1: %d\n",num2==num1);//f - 0
	printf("\n");

	printf("num1!=num2: %d\n",num1!=num2);//t - 1
	printf("num2!=num1: %d\n",num2!=num1);//t - 1
//	---------------------------
	//3. Logical Operator : AND-&&, OR-||, NOT-!
	int no1=10, no2=20, no3=30;
	printf("\n");
	printf("no1<no2 AND no2<no3: %d\n",(no1<no2) && (no2<no3));// t , t => T - 1
	printf("\n");
	printf("no1>no2 OR no2>no3: %d\n",(no1>no2) || (no2>no3));// f , f => f - 0
	printf("\n");
	printf("no1<=no2 AND no2>=no3: %d\n",(no1<=no2) && (no2>=no3));// t , f => f - 0
	printf("\n");
	printf("no1>=no2 OR no2<=no3: %d\n",(no1>=no2) || (no2<=no3));// f , t => t - 1
	printf("\n");
	printf("!no1>=no2: %d\n",!(no1>=no2));// f => t - 1
//	---------------------------
	//4. Assignment Operator : +=, -=, *=, /=, %=
	int n=10;
	printf("\n");
	n+=2;
	printf("n+=2 : %d\n",n);// 12
	printf("\n");
	n-=5;
	printf("n-=5 : %d\n",n);// 7
	printf("\n");
	n*=2;
	printf("n*=2 : %d\n",n);// 14
	printf("\n");
	n/=2;
	printf("n/=2 : %d\n",n);// 7
	printf("\n");
	n%=3;
	printf("n%=3 : %d\n",n);// 1
//	---------------------------
	//5. Increment & Decrement Operator : var++, var--
	int val=10;
	printf("\n");
	printf("Value: %d\n",val);
	
	printf("val++: %d\n",val++);
	printf("Value: %d\n",val);

	printf("++val: %d\n",++val);
	printf("Value: %d\n",val);

	printf("val--: %d\n",val--);
	printf("Value: %d\n",val);

	printf("--val: %d\n",--val);
	printf("Value: %d\n",val);

}

	
