		//File Handling:- You can read a file, write and again read a file after writing
		//fopen() -> Open file
		//fclose() -> Close file
		//fprintf() -> Write in file
		//fscanf() -> read file => Will get data on console
		
			//Syntax
		//1. Declare file pointer 	:=> FILE *fp;
		//2. Open file 				:=> fopen("file_name",file_mode);
		//3. Write/read file 		:=> write- fprintf(fp,"Text"); / read- fscanf(fp,&);
		//4. Close file 			:=> fclose(fp); 
		
		//File_mode ->  w/W : Write
		//				r/R : Read
		//				a/A : Append - add text at end of the file

#include<stdio.h>
int main(){

	FILE *fp;
	fp=fopen("data.txt","w");
	fprintf(fp,"Welcome to file handling! ");
	fclose(fp);
	printf("Data written successfully!\n");
	return 0;
}
