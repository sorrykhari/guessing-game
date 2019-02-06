#include <stdio.h>
#include <stdlib.h>

//This program finds the largest of three numbers. 

int main(){
	
	int n1,n2,n3;
	
	printf("Input three numbers: ");
	scanf("%d%d%d",&n1, &n2, &n3);
	
	if (n1 > n2 && n1 > n3){
		
		printf("1st Number = %d, 2nd Number = %d, 3rd Number = %d\n", n1, n2, n3);
		
		printf("The 1st Number is the greatest among the three.");
	}
	
	else if(n2 > n1 && n2 > n3){
		
		printf("1st Number = %d, 2nd Number = %d, 3rd Number = %d\n", n1, n2, n3);
		
		printf("The 2nd Number is the greatest among the three.");
	}
	
	else if(n3 > n1 && n3 > n2){
		
		printf("1st Number = %d, 2nd Number = %d, 3rd Number = %d\n", n1, n2, n3);
		
		printf("The 3rd Number is the greatest among the three.");
		
	}
	
	else if(n1 == n2 && n1 == n3){
		
		printf("1st Number = %d, 2nd Number = %d, 3rd Number = %d\n", n1, n2, n3);
		
		printf("All numbers are equal.");
	}
	
	else if(n1 == n2 && n1 > n3){
		
		printf("1st Number = %d, 2nd Number = %d, 3rd Number = %d\n", n1, n2, n3);
		
		printf("The 1st and 2nd Numbers are equal and the largest.");
	}
	
	else if(n1 == n3 && n1 > n2){
		
		printf("1st Number = %d, 2nd Number = %d, 3rd Number = %d\n", n1, n2, n3);
		
		printf("The 1st and 3rd Numbers are equal and the largest.");
	}
	
	else if(n3 == n2 && n3 > n1){
		
		printf("1st Number = %d, 2nd Number = %d, 3rd Number = %d\n", n1, n2, n3);
		
		printf("The 2nd Numbers and 3rd are equal and the largest.");
	}
	
	else{
		
		printf("Error. Invalid Input");
	}

	return 0;
}