/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include <stdio.h>
int count_word_in_str_way_1(char *str, char *word){

	int result = 0, str_index = 0, word_index = 0, len = 0,flag=0;

	while (str[str_index] != '\0')
	{
		//this if is for same character input string and word
		if (str[str_index] == str[str_index + 1] && str[str_index + 1] != '\0')
		{
			if (word[word_index] == str[str_index])
			{
				++word_index;
				++len;
				if (word[word_index] == '\0')
				{
					result = len + 1 - word_index + 1;
					word_index = 0;
				}
				flag = 1;
			}
			else{
				flag = 0;
				len = 0;
			}
		}
		//input with different character string and word
		else if (word[word_index] == str[str_index] && flag != 1)
		{
			++word_index;
			if (word[word_index] == '\0')
			{
				++result;
				word_index = 0;
			}

		}
		else
			word_index = 0;

		++str_index;
	}
	return result;
}


