#include<stdio.h>

		// Structure: 
				//1. User define data type, we can store multiple value together.
				//2. eg: Student management, employee management system.
				//3. Each memory has it's own memory space.
				//4. Can access members at a same time.

struct employee
{
	int eid;
	char name[20];
	char loc[20];
	float salary;
};

struct student
{
	int sid;
	char name[20];
	char loc[20];
	int marks;
};


int main(){
	
	struct employee e1={101,"Prachi","Pune",50000.00};
	printf("Employee ID: %d \n",e1.eid);
	printf("Employee Name: %s \n",e1.name);
	printf("Employee Location: %s \n",e1.loc);
	printf("Employee Salary: %.2f \n",e1.salary);
	printf("--------------------------------\n");
	struct student s1={001,"Swaraj","Pune",92};
	printf("Student ID: %d \n",s1.sid);
	printf("Student Name: %s \n",s1.name);
	printf("Student Location: %s \n",s1.loc);
	printf("Student Marks: %d \n",s1.marks);
	printf("--------------------------------\n");
	struct student s2;
	s2.sid=002;
	strcpy(s2.name,"Mohit");
	strcpy(s2.loc,"Banglore");
	s2.marks=78;
	printf("Student ID: %d \n",s2.sid);
	printf("Student Name: %s \n",s2.name);
	printf("Student Location: %s \n",s2.loc);
	printf("Student Marks: %d \n",s2.marks);
	printf("--------------------------------\n");
	
		
}
