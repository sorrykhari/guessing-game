#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	srand(time(NULL)); //initializing rand()
	
	//variables 
	int usrgss;
	int answer = rand() % 100 + 1; // generates random number from 0-100
	
	
	printf("Please enter an integer ranging from 1-100.: ");
	scanf("%d", &usrgss);
	
	while(usrgss != answer)
	{
		if(answer > usrgss)
		{
			printf("Your guess is too low, try again.: ");
			scanf("%d", &usrgss);
		}
		else if(answer < usrgss)
		{
			printf("Your guess is too high, try again.: ");
			scanf("%d", &usrgss);
		}
	}
	printf("Congratulations, you guessed correctly!");
	
	return 0;

}