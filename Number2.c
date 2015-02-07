/*Write a C program that recursively determines if a string is a palindrome.
Before your program makes the palindrome determination, you must remove all punctuation characters from the string.
Recall a palindrome is a sequence of characters that can be read the same way in either direction.
“Madam I’m Adam!” is an example of a palindrome (recall punctuation is removed).
Once again, you must develop your own program driver to illustrate that your program works.
You may use any library functions you wish.*/

#include "header.h"

char *WSRemover(char *str){
	int size = 0, 
		i = 0, 
		j = 0;
	
	char *return_str = NULL;
	
	return_str = (char *) malloc(sizeof(char));

	size = (int)strlen(str);
	
	for(i = 0; i < size; i++){

		if(toupper(str[i]) >= 65 && toupper(str[i]) <= 90){ // Upper case alphabet characters lie on the ASCII table between 65 & 90
	
			return_str = (char *) realloc (return_str, sizeof(char) * (j + 1));
		
			return_str[j++] = str[i];
		}
	}

	return_str = (char *) realloc (return_str, sizeof(char) * (j + 1));
	return_str[j] = '\0';

	return return_str;
} 

void check_palindrome(char *NoWSstring, char *str, int begin, int end){

	if(toupper(NoWSstring[begin]) != toupper(NoWSstring[end]))
	{
		printf("%s isn't a palindrome\n\n", str);
		return;
	}

	else if(begin >= end)
	{
		printf("%s is a palindrome\n\n", str);
		return;
	}
	
	else 
	{
		check_palindrome(NoWSstring, str, begin+1, end-1);
		return;
	}

	return;
}

void palindrome(char *str){

	int begin = 0, end = 0;
	char *new_str = NULL;

	new_str = WSRemover(str);
	
	end = strlen(new_str) - 1;

	check_palindrome(new_str, str, begin, end);

	free(new_str);
}
