#include "stdio.h"
#include "stdlib.h"
#include "string.h"


/**
* A palindrome can be defined as a string that is spelled the same from the beginning and the end. This function will return 0 if the string is a palindrome, 1 otherwise.
* @param potential_palindrome char * A pointer to a string that may potentially be a palindrome.
* @return int 0 if palindrome, 1 otherwise.
*
*/
int is_palindrome(char * potential_palindrome, int num_chars)
{
	char * char_ptr = potential_palindrome;
	char * reversed_string = malloc(num_chars + 1);

	char a = char_ptr[2];
	for (int i = 0; i < num_chars; i++) {
		reversed_string[num_chars - 1 - i] = char_ptr[i];
	}

	reversed_string[num_chars + 1] = '\0';
	for (int i = 0; i < num_chars; i++) {
		if (reversed_string[i] != char_ptr[i]) {
			return 1;
		}
	}

	free(reversed_string);

	return 0;
}


int main()
{
	if (is_palindrome("101", strlen("101"))) {
		printf("Not a palindrome!\n");
	} else {
		printf("Is a palindrome!\n");
	}
	return 0;
}