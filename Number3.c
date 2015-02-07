/*Write a C program that encrypts and decrypts strings using the Caesar Shift Cipher.
The shift value must be an integer, but may be positive or negative.
If the shift value is 4, then an ‘A’ becomes ‘E’. If the shift value is -4, then ‘A’ becomes ‘W’.
Note, the plaintext messages are encrypted using alphabetic characters only.
Also, all characters in the messages must first be converted to uppercase before encrypting or decrypting them.
Develop your own program driver to illustrate that your program works. You may use any library functions you wish.*/

#include "header.h"

char *caesar_shift(){
	char ar[26]; // 26 letters in the alphabet

	static char str[100];

	int shift_value = 0,
		i = 0, 
		j = 0,
		index = 0;

	for (i = 0, j = 65; i < 26; i++, j++){

		ar[i] = (char)j;

	}

	printf("Enter your string:\n ");
	
	scanf("%s", str);
		
	printf("\nShift value: ");

	scanf("%d", &shift_value);

	for(i = 0; (unsigned)i < strlen(str); i++){

		index = (toupper(str[i]) - 65) + shift_value;

		while (index < 0)
		{
			index = index + 26;
		}
		str[i] = ar[index % 26];
	}

	return str;
}

void driver(){
	char *str = NULL;
	int i = 0;
	
	
 	str = caesar_shift();

	printf("%s is the encryption of the string.\n\n", str);
	
	str = caesar_shift();

	printf("%s is the decrypted string.\n\n", str);
}
