/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str == NULL)
	        return NULL;      //NULL case conditions

	char *result = (char *)malloc(10);
	int index = 0, word_index = 0, temp = 0;

	for (index = 0; str[index] != '\0'; index++)
		if (str[index] == ' ')
			word_index = 0;        //if space make resultant index as zero and traverse through last space
		else
		{
			result[word_index++] = str[index];   //after every space a word is copied and when last space is reached last word is copied
			temp = word_index;
		}
	result[temp] = '\0';
	return result;
}
