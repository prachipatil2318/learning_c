// Array in C: Collection of multiple values of same datatype.
#include<stdio.h>
int main(){
//	int i;
//	int price[4]={100,200,300,400};
//	printf("%d\n",price[3]);
//	for(i=0;i<4;i++){
//		printf("%d ",price[i]);
//	}printf("\n");
//	printf("Reverse: ");
//	for(i=3;i>=0;i--){
//		printf("%d ",price[i]);
//	}
//	printf("\n");
//	
//	printf("Sum of array elements: ");
//	int sum=0;
//	for(i=0;i<5;i++){
//		sum+=price[i];
//	}
//	printf("%d \n",sum);
	

//	int j;
//	char latter[5]={'A','B','C','D','E'};
//	printf("%c\n",latter[2]);
//	for(j=0;j<5;j++){
//		printf("%c ",latter[j]);
//	}
//	
//	int k;
//	float floating_val[5]={2.1,3.4,9.8,1.2,9.0};
//	printf("%.2f\n",floating_val[2]);
//	for(k=0;k<5;k++){
//		printf("%.2f ",floating_val[k]);
//	}	

	// Accept 5 array element from user and display them, reverse them, calculate sum and avg, even and odd, max and min
//	int num[5];
//	int i;
//	for(i=0;i<5;i++){
//		printf("Enter the elements for an array: ");
//		scanf("%d",&num[i]);
//	}
//	printf("Elements of array: ");
//	for(i=0;i<5;i++){
//		printf("%d ",num[i]);
//	}
//	printf("\n");
//	printf("Reverse: ");
//	for(i=4;i>=0;i--){
//		printf("%d ",num[i]);
//	}
//	printf("\n");
//	int sum=0;
//	for(i=0;i<5;i++){
//		sum+=num[i];
//	}
//	printf("Sum: %d\n",sum);
//	printf("Avg: %d\n",sum/5);
//	for(i=0;i<5;i++){
//		if(num[i]%2==0){
//			printf("%d is even number.\n",num[i]);
//		}else{
//			printf("%d is odd number.\n",num[i]);
//		}
//	}
//	int max=num[0];
//	for(i=0;i<5;i++){
//		if(num[i]>max){
//			max=num[i];
//		}
//	}printf("Max in array is: %d\n",max);
//	int min=max;
//	for(i=0;i<5;i++){
//		if(num[i]<min){
//			min=num[i];
//		}
//	}printf("Min in array is: %d\n",min);

	// 2D array
//	char names[4][10]={"Prachi","Priya","Swaraj","Mohit"};
//	printf("Array Elements: ");
//	for(i=0;i<4;i++){
//		printf("%s ",names[i]);
//	}
	char names[4][10];
	int i,j;
	for(i=0;i<4;i++){
		printf("Enter names: ");
		scanf("%s",&names[i]);
	}
	for(j=0;j<4;j++){
		printf("%s ",names[j]);
	}
//	printf("\n");
//	printf("Reverse: ");
//	for(i=3;i>=0;i--){
//		printf("%s ",names[i]);
//	}

	
	
	
	return 0;
}
