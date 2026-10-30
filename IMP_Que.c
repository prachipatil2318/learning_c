#include<stdio.h>
int main()
{
//--------------------------------------------------	
		// Prime Number
	//	int i,num,count=0;
	//	printf("Enter the number: ");
	//	scanf("%d",&num);
	//	for(i=2;i<=num;i++){
	//		if(num%i==0){
	//			count++;
	//			}
	//		}
	//	if(count==2){
	//		printf("%d is Prime\n",num);
	//	}else{
	//		printf("%d is not prime\n",num);
	//	}
	//--------------------------------------------------
	//	int i,j;
	//	for(i=2;i<=20;i++){
	//		int count=0;
	//		for(j=1;j<=i;j++){
	//			if(i%j==0){
	//				count++;
	//			}
	//		}
	//		if(count==2){
	//		printf("%d Prime number \n",i);
	//		}	
	//	}
//--------------------------------------------------
		// Fibonacci series - It is a sequence where number is a sum of previous two numbers.
	//	int first=0, second=1,next,i;
	//	printf("%d %d ",first, second);
	//	for(i=1;i<=10;i++){
	//		next=first+second;
	//		printf("%d ",next);
	//		first=second;
	//		second=next;
	//	}
//--------------------------------------------------
		// Reverse Number
	//	int num,rev=0,rem;
	//	printf("enter the number: ");
	//	scanf("%d",&num);
	//	while(num>0){
	//		rem=num%10;
	//		rev=rev*10+rem;
	//		num=num/10;
	//	}
	//	printf("Reverse of number is : %d\n",rev);
//--------------------------------------------------
		// Palindrome Number
		int num,rev=0,rem;
		printf("enter the number: ");
		scanf("%d",&num);
		int temp=num;
		while(num>0){
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
		printf("Reverse of number is : %d\n",rev);

		if(rev==temp){
			printf("Palindrome number\n");
		}
		else{
			printf("Not a Palindrome number\n");
		}






}

	
		

