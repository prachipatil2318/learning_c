#include<stdio.h>
struct student
{
	int srollno;
	char name[20];
	char loc[20];
	int marks;
};
int main(){
	struct student s1;
	printf("Enter Your roll no.: ");
	scanf("%d",&s1.srollno);
	
	printf("Enter Your Name: ");
	scanf("%s",&s1.name);
	
	printf("Enter Your Location: ");
	scanf("%s",&s1.loc);
	
	printf("Enter Your marks: ");
	scanf("%d",&s1.marks);
	printf("--------------------------------\n");
	printf("Student Roll No: %d \n",s1.srollno);
	printf("Student Name: %s \n",s1.name);
	printf("Student Location: %s \n",s1.loc);
	printf("Student Marks: %d \n",s1.marks);
}
