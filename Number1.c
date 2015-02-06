#include "header.h"

/*
Write a C program that sorts strings into descending or ascending order (determined by the user of the program).
For this program you must declare an array of pointers to the strings, and perform the sorting without using strcpy().
Hence, you must manipulate the pointers to the strings only!
Below is a pseudocode algorithm for bubble sort:

1. get values for n and the n list items (n represents the number of records in the file, list is an array of records)
2. set the marker U for the unsorted section at the end of the list (U is an integer index value)
3. while the unsorted section has more than one element do steps 4 through 8
4. set the current element marker C at the second element of the list (C is an integer index value)
5. while C has not passed U do steps 6 and 7
6. if the item at position C is less than the item to its left then exchange these two items
7. move C to the right one position
8. move U left one position
9. stop
*/

void order_strings(char **string_array, char ch, int str_length)
{
	int curr = 0,
		unsorted = 0;
	char *temp_str = '\0';
	for(unsorted = str_length - 1; unsorted > 1; unsorted--) 
	{
		for(curr = 1; curr <= unsorted; curr++) 
		{
			if(ch == 'D') 
			{
			
				if(*string_array[curr] > *string_array[curr - 1]) // sort in descending order
				{
					temp_str = string_array[curr];
					string_array[curr] = string_array[curr - 1];
					string_array[curr - 1] = temp_str;
				}
			}
			
			else 
			{
			
				if(*string_array[curr] < *string_array[curr - 1]) // sort in ascending order
				{
					temp_str = string_array[curr];
					string_array[curr] = string_array[curr - 1];
					string_array[curr - 1] = temp_str;
				}
			}
		}
	}
}
