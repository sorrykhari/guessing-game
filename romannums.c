#include <stdio.h>
#include <stdlib.h>

int main()
{
   // 1 = I,  5 = V, 4 = IV, 10 = X, 9 = IX, 15 = XV,
   
   int num, i;
   
   
   printf("Please enter an integer from 1-20: ");
   scanf("%d", &num);
   
   if(num == 1 || num == 2 || num ==3)
   {
		char rom[num];
		for(i = 0; i <= num -1; i++)
		{
			rom[i+1] = '\0';
			rom[i] = 'I';
		}
		printf("Original integer: %d\n", num);
		printf("Roman numeral of the integer: %s", rom);
   }
	
	else if(num == 4)
	{	
		char rom[2] = "IV";
		rom[2] = '\0';
		printf("Original integer: %d\n", num);
		printf("Roman numeral of the integer: %s", rom);
	}
	
	else if(num == 5)
	{ 
		char rom = 'V';
		//rom = '\0';
		printf("Original integer: %d\n", num);
		printf("Roman numeral of the integer: %c", rom);
	}
	
	else if (num == 6 || num ==  7 || num == 8)
	{
		char rom[num - 5];
		for(i = 1; i <= num - 5; i++)
		{
			rom[i+1] = '\0';
			rom[0] = 'V';
			rom[i] = 'I';	
		}
		
		printf("Original integer: %d\n", num);
		printf("Roman numeral of the integer: %s", rom);
	}
	
	else if(num == 10)
	{
		printf("Original integer: 10");
		printf("Roman numeral of the integer: X");
	}
	
	else if(num == 9)
	{
		printf("Original integer: 9");
		printf("Roman numeral of the integer: IX");
	}
	
	else if(num > 10 && num < 14)
	{
		char rom[num - 10];
		for(i = 1; i <= num - 10; i++)
		{
			rom[i+1] = '\0';
			rom[0] = 'X';
			rom[i] = 'I';
		}
		printf("Original integer: %d\n", num);
		printf("Roman numeral of the integer: %s", rom);
	}	
	
	else if(num == 14)
	{
		printf("Original integer: 14");
		printf("Roman numeral of the integer: XIV");
	}
	
	else if(num == 15)
	{
		printf("Original integer: 15");
		printf("Roman numeral of the integer: XV");
	}
	
	else if(num > 15 && num < 19)
	{
		char rom[num - 14];
		for(i = 2; i <= num - 14; i++)
		{
			rom[i+1] = '\0';
			rom[0] = 'X';
			rom[1] = 'V';
			rom[i] = 'I';
		}
		printf("Original integer: %d\n", num);
		printf("Roman numeral of the integer: %s", rom);
	}
	
	else if(num == 20)
	{
		printf("Original integer: 20");
		printf("Roman numeral of the integer: XX");
	}
	
	else if(num == 19)
	{
		printf("Original integer: 19");
		printf("Roman numeral of the integer: XIX");
	}
	
   return 0;
}