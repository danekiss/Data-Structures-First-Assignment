/*******************************************************************************************
* Name: Dan Ekiss                                                                          *
* Class: CptS 122 Section 3                                                                *
* PA1                                                                                      *
* Date: January 30, 2015                                                                   *
*                                                                                          *
*******************************************************************************************/

#include "header.h"

#define LENGTH 10

int main(void)
{
	char *string_array[LENGTH] = {"Cougars", "Sloan", 
						"Cougs", "Bees",
						"Computer", "Science",
						"Corn", "Strawberry",
						"Kiwi", "Tomato"};

	char buffer[100];
	char ch = '\0';
	
	int n = 0;
	

	////////#1/////////
	
	printf("\nUNSORTED:\n\n");

	for(n = 0; n < LENGTH; n++){

		printf("%d) %s\n\n", n, string_array[n]);

	}

	order_strings(string_array, 'D', LENGTH);
	
	printf("\nDESCENDING ORDER:\n\n");

	for(n = 0; n < LENGTH; n++){

		printf("%d) %s\n\n", n, string_array[n]);

	}

		order_strings(string_array, 'A', LENGTH);
	
	printf("\nASCENDING ORDER:\n\n");

	for(n = 0; n < LENGTH; n++)
	{
		printf("%d) %s\n\n", n, string_array[n]);
	}

	printf("\n");
	
	/////////////#2/////////////
	printf("\nCheck if a string qualifies as a palindrome: "); 
	gets(buffer);
	palindrome(buffer);
	
	/////////////#3////////////
	printf("\n\n");
	driver(); // execute caesar shift driver

	return 0;
}
