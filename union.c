		//Union: 
				//1. It is user define data type, can store multiple value only one at a time.
				//2. eg: Parking space, payment method, employee status.
				//3. All members has same memory space.
				//4. Can access only one members at a time.
		
		
#include<stdio.h>
#include<string.h>

union stud
{
    int id;
    char name[20];
    int age;
};

int main()
{
    union stud s1;
    s1.id;
    printf("Enter Student ID: ");
    scanf("%d",&s1.id);
    printf("Student ID: %d\n", s1.id);

    s1.name;
    printf("Student Name: ");
    scanf("%s",&s1.name);
    printf("Student Name: %s\n", s1.name);

    s1.age;
    printf("Student Age: ");
    scanf("%d",&s1.age);
    printf("Student Age: %d\n", s1.age);
    

    return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
