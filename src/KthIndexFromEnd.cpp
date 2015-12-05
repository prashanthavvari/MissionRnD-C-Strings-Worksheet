/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	int pointer = 0 - K - 1, i;
	if (str == '\0')
		return '\0';
	if (K < 0)
		return '\0';
	if (str[K] == '\0')
		return '\0';
	for (i = 0; str[i] != '\0'; i++)
		pointer = pointer + 1;
	if (pointer < 0)
		return '\0';
	else
		return str[pointer];

}