/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include <malloc.h>

#define SIZE 31
int check(char *str1, char *str2, int ini, int fin)
{
	int i = ini, j = 0, k = 0, count = 0;
	for (j = 0; str2[j] != '\0'; j++)
	{
		if (str1[i] == str2[j])
		{
			count++;
			i++;
			if (count == (fin - ini))
				return 1;
		}
		else
		{
			i = ini;
			count = 0;
		}
	}
	return 0;
}
char ** commonWords(char *str1, char *str2) {
	if (str1 == '\0' || str2 == '\0')
		return(NULL);
	int initial2 = 0, i = 0, j = 0, k = 0, relindex = 0, l = 0, newsubindex = 0, initial = 0, finl = 0, flag = 0;
	char **res = (char **)malloc(SIZE * sizeof(char *));
	for (i = 0; i < SIZE; i++)
		res[i] = (char *)malloc(SIZE * sizeof(char));
	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] == ' ')
		{
			finl = i;
			initial2 = initial;
			k = check(str1, str2, initial, finl);
			initial = finl + 1;
		}
		if (k == 1)
		{
			flag = 1;
			for (l = initial2; l < finl; l++)
			{
				res[relindex][newsubindex++] = str1[l];
			}
			res[relindex][newsubindex] = '\0';
			relindex++;
			newsubindex = 0;
		}
		k = 0;
	}
	initial2 = initial;
	finl = i;
	k = check(str1, str2, initial, finl);
	if (k == 1)
	{
		flag = 1;
		for (l = initial2; l < finl; l++)
		{
			res[relindex][newsubindex++] = str1[l];
		}
		res[relindex][newsubindex] = '\0';
		relindex++;
		newsubindex = 0;
	}
	if (flag != 1)
		return(NULL);
	return res;
}