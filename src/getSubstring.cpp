/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/
#include<stdio.h>
#include <stddef.h>
#include <stdlib.h>

char *get_sub_string(char *str, int i, int j)
{
	if (str == NULL || i >j)
		return NULL;           //NULLcase conditions
	
	int index, sub_index = 0;
	char *result = (char *)malloc((i + j - 1)*sizeof(char));
	
	for (index = i; index <= j; index++)
	{
		result[sub_index] = str[i];  //copying sub string till given range (i & j) to resultant string
		str++;
		sub_index++;
	}
	result[sub_index] = '\0';
	return result;
}
