/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void rev(char *input, int fst, int lst)
{
	int i, j;
	char temp;
	j = lst - 1;
	for (i = fst; i <(lst + fst) / 2; i++)
	{
		temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		j--;
	}

}

void str_words_in_rev(char *input, int len){
	int i, j;
	j = 0;
	for (i = 0; i < len; i++)
	{
		if (input[i] == ' ')
		{
			rev(input, j, i);
			j = i + 1;
		}
	}
	rev(input, j, len);
	rev(input, 0, len);

	
}
