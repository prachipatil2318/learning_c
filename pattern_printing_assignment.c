#include<stdio.h>
int main(){
	
	//	C LANGUAGE
	//PATTERN PRINTING PRACTICE
	//Section 1: Star Patterns
		//1. Square Star Pattern
		//Write a C program to print 5 rows and 5 columns of stars.
		//Expected pattern:
		// * * * * *
		// * * * * *
		// * * * * *
		// * * * * *
		// * * * * *
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("* ");
		}printf("\n");
	}
	 

		//2. Right-Angle Triangle
		//Write a C program to print a right-angle triangle using 5 rows of stars.
		//Expected pattern:
		// *
		// * *
		// * * *
		// * * * *
		// * * * * *
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}printf("\n");
	}
	
	
		//3. Inverted Right-Angle Triangle
		//Write a C program to print an inverted right-angle triangle using 5 rows of stars.
		//Expected pattern:
		// * * * * *
		// * * * *
		// * * *
		// * *
		// *
	int i,j;
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			printf("* ");
		}printf("\n");
	}
	
	
	
		//4. Increasing Star Pattern
		//Write a C program to print 1 star in the first row, 2 stars in the second row, and continue up to 5 rows.
		//Expected pattern:
		// *
		// **
		// ***
		// ****
		// *****
		//5. Decreasing Star Pattern
		//Write a C program to print 5 stars in the first row and decrease the number of stars by 1 in each next row.
		//Expected pattern:
		// *****
		// ****
		// ***
		// **
		// *
		
		
		//6. Rectangle Star Pattern
		//Write a C program to print a rectangle containing 4 rows and 6 columns of stars.
		//Expected pattern:
		// * * * * * *
		// * * * * * *
		// * * * * * *
		// * * * * * *
 
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=6;j++){
			printf("* ");
		}printf("\n");
	}


		//Section 2: Number Patterns
		//7. Number Square
		//Write a C program to print numbers from 1 to 5 in every row.
		//Expected pattern:
		//1 2 3 4 5
		//1 2 3 4 5
		//1 2 3 4 5
		//1 2 3 4 5
		//1 2 3 4 5
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%d ",j);
		}printf("\n");
	}
	
	
		//8. Repeated Row Number
		//Write a C program to print the row number repeatedly. Print 1 once in row 1, 2 twice in row 2, and so on.
		//Expected pattern:
		//1
		//2 2
		//3 3 3
		//4 4 4 4
		//5 5 5 5 5
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i);
		}printf("\n");
	}
	
	
		//9. Increasing Number Triangle
		//Write a C program to print numbers from 1 up to the current row number.
		//Expected pattern:
		//1
		//1 2
		//1 2 3
		//1 2 3 4
		//1 2 3 4 5
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}printf("\n");
	}
	
	
		//10. Decreasing Number Triangle
		//Write a C program to print numbers from 1 to 5 in the first row, then reduce the count by 1 in each row.
		//Expected pattern:
		//1 2 3 4 5
		//1 2 3 4
		//1 2 3
		//1 2
		//1
	int i,j;
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}printf("\n");
	}
	
	
		//11. Repeated Number Rows
		//Write a C program to print the number 5 five times in each of 5 rows.
		//Expected pattern:
		//5 5 5 5 5
		//5 5 5 5 5
		//5 5 5 5 5
		//5 5 5 5 5
		//5 5 5 5 5
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("5 ");
		}printf("\n");
	}
	
	
		//12. Multiplication Pattern
		//Write a C program to print the product of the row number and column number for 5 rows and 5 columns.
		//Expected pattern:
		//1 2 3 4 5
		//2 4 6 8 10
		//3 6 9 12 15
		//4 8 12 16 20
		//5 10 15 20 25
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%d ",i*j);
		}printf("\n");
	}
	
	
		//13. Continuous Number Triangle
		//Write a C program to print consecutive numbers, starting from 1, in a triangle pattern.
		//Expected pattern:
		//1
		//2 3
		//4 5 6
		//7 8 9 10
		//11 12 13 14 15
	int i,j,num=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",num);
			num++;
		}printf("\n");
	}
	
	
		//Section 3: Alphabet Patterns
		//14. Alphabet Square
		//Write a C program to print A, B, C, D, E in each of 5 rows.
		//Expected pattern:
		//A B C D E
		//A B C D E
		//A B C D E
		//A B C D E
		//A B C D E
	int i,j;
	for(i=1;i<=5;i++){
		for(j=65;j<=69;j++){
			printf("%c ",j);
		}printf("\n");
	}
	
	
		//15. Alphabet Triangle
		//Write a C program to print alphabets from A up to the current row.
		//Expected pattern:
		//A
		//A B
		//A B C
		//A B C D
		//A B C D E
	int i,j;
	for(i=1;i<=5;i++){
		for(j='A';j<'A'+i;j++){
			printf("%c ",j);
		}printf("\n");
	}
	
	
		//16. Repeated Alphabet Rows
		//Write a C program to print the row alphabet repeatedly.
		//Expected pattern:
		//A
		//B B
		//C C C
		//D D D D
		//E E E E E
	int i,j;
	char ch='A';
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%c ",ch);
		}
		ch++;
		printf("\n");
	}
	
	
		//Section 4: Mixed and Logic-Building Patterns
		//17. Even Number Triangle
		//Write a C program to print even numbers from 2, increasing by 2, in a triangle pattern.
		//Expected pattern:
		//2
		//2 4
		//2 4 6
		//2 4 6 8
		//2 4 6 8 10
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j*2);
		}printf("\n");
	}
	
	
		//18. Odd Number Triangle
		//Write a C program to print odd numbers from 1, increasing by 2, in a triangle pattern.
		//Expected pattern:
		//1
		//1 3
		//1 3 5
		//1 3 5 7
		//1 3 5 7 9
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j*2-1);
		}printf("\n");
	}
	
	
		//19. 0 and 1 Pattern
		//Write a C program to print alternating 1 and 0 values in each row, starting with 1 in every row.
		//Expected pattern:
		//1 0 1 0 1
		//1 0 1 0 1
		//1 0 1 0 1
		//1 0 1 0 1
		//1 0 1 0 1
	int i,j;
	int num1=1,num2=0;
	for(i=1;i<=5;i++){
		for(j=1;j<3;j++){
			printf("%d %d ",num1,num2);
		}printf("\n");
	}
	
	
		//20. Simple Number Pyramid
		//Write a C program to print a centered number pyramid with 5 rows. (Try using spaces before the numbers.)
		//Expected pattern:
		//    1
		//   1 2
		//  1 2 3
		// 1 2 3 4
		//1 2 3 4 5
	int i,j,k;
	for(i=1;i<=5;i++){
		for(k=1;k<=5-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf(" %d",j);
		}printf("\n");
	}


}
