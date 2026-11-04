		//Enum: Fixed type of value like gender: female, male ,status: high, medium,low.
#include<stdio.h>
enum status{ High,Medium,Low };
enum weekdays{ Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
int main(){
	enum status s1,s2,s3;
	s1=High;
	printf("High= %d\n",s1);
	s2=Medium;
	printf("Medium=%d\n",s2);
	s3=Low;
	printf("Low= %d\n",s3);
	
	int i;
	enum weekdays today;
	today=Tuesday;
	char *days[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
//	printf("Today is: %s",days[today]);	
	for(i=0;i<=7;i++){
		printf("Today is: %s\n",days[i]);
	}
}
	

