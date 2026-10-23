#include<stdio.h>
	//Operators	- To perform mathematical operation, Check relation, assign values, compare values we use operators.
	//1. Arithematic Operator : +, -, *, /, %
	//2. Relation Operator : <, >,<=, >=, ==, != 
	//3. Logical Operator : AND-&&, OR-||, NOT-!
	//4. Assignment Operator : +=, -=, *=, /=, %=
	//5. Increment & Decrement Operator : var++, var--
	//6. Bitwise Operator - Bitwise AND, Bitwise OR, Bitwise XOR, Bitwise NOT, Shift: Leftshift & Rightshift
//	---------------------------
int main(){
	//1. Arithematic Operator : +, -, *, /, %
	int a=10, b=20;
	printf("Arithematic Operator \n");
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
	printf("--------------------------- \n");
	printf("Relational Operator \n");
	printf("num1<num2: %d\n",num1<num2); //t - 1
	printf("num2<num1: %d\n",num2<num1); //f - 0
	printf("num1<=num2: %d\n",num1<=num2);//t - 1
	printf("num2<=num1: %d\n",num2<=num1);//f - 0
	printf("num1>num2: %d\n",num1>num2);//f - 0
	printf("num2>num1: %d\n",num2>num1);//t - 1
	printf("num1>=num2: %d\n",num1>=num2);//f - 0
	printf("num2>=num1: %d\n",num2>=num1);//t - 1
	printf("num1==num2: %d\n",num1==num2);//f - 0
	printf("num2==num1: %d\n",num2==num1);//f - 0
	printf("num1!=num2: %d\n",num1!=num2);//t - 1
	printf("num2!=num1: %d\n",num2!=num1);//t - 1
//	---------------------------
	//3. Logical Operator : AND-&&, OR-||, NOT-!
	int no1=10, no2=20, no3=30;
	printf("--------------------------- \n");
	printf("Logical Operator \n");
	printf("no1<no2 AND no2<no3: %d\n",(no1<no2) && (no2<no3));// t , t => T - 1
	printf("no1>no2 OR no2>no3: %d\n",(no1>no2) || (no2>no3));// f , f => f - 0
	printf("no1<=no2 AND no2>=no3: %d\n",(no1<=no2) && (no2>=no3));// t , f => f - 0
	printf("no1>=no2 OR no2<=no3: %d\n",(no1>=no2) || (no2<=no3));// f , t => t - 1
	printf("!no1>=no2: %d\n",!(no1>=no2));// f => t - 1
//	---------------------------
	//4. Assignment Operator : +=, -=, *=, /=, %=
	int n=10;
	printf("--------------------------- \n");
	printf("Assignment Operator \n");
	n+=2;
	printf("n+=2 : %d\n",n);// 12
	n-=5;
	printf("n-=5 : %d\n",n);// 7
	n*=2;
	printf("n*=2 : %d\n",n);// 14
	n/=2;
	printf("n/=2 : %d\n",n);// 7
	n%=3;
	printf("n%=3 : %d\n",n);// 1
//	---------------------------
	//5. Increment & Decrement Operator : var++, var--
	int val=10;
	printf("--------------------------- \n");
	printf("Increment & Decrement Operator \n");
	printf("Value: %d\n",val);
	
	printf("val++: %d\n",val++);
	printf("Value: %d\n",val);

	printf("++val: %d\n",++val);
	printf("Value: %d\n",val);

	printf("val--: %d\n",val--);
	printf("Value: %d\n",val);

	printf("--val: %d\n",--val);
	printf("Value: %d\n",val);
//	---------------------------
	//6. Bitwise Operator - Bitwise AND, Bitwise OR, Bitwise XOR, Bitwise NOT, Shift: Leftshift & Rightshift
	int n1=4, n2=5;
	printf("--------------------------- \n");
	int res=n1 & n2;// 0100 & 0101 = 0100 :- 4
	printf("Bitwise Operator \n");
	printf("Result for Bitwise AND: %d\n",res);
	int res1=n1 | n2;// 0100 & 0101 = 0101 :- 5
	printf("Result for Bitwise OR: %d\n",res1);
	int res2=n1 ^ n2;// 0100 ^ 0101 = 0001 :- 1 (Return 1 if both bit are different)
	printf("Result for Bitwise XOR: %d\n",res2);
	int res3=~n1;// 0100 -> 1011 = -5 (Change 1 into 0 and 0 into 1 and then follow rule of -(num+1) : eg: -(4+1)=-5)
	printf("Result for Bitwise NOT: %d\n",res3);
	
}

	
