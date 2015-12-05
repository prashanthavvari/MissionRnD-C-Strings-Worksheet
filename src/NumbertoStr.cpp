/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal){
	int i = 0, h = 0, k = 0, j = 0, count = 0;
	char temp;
	for (i = 0; i < afterdecimal; i++)
		number = number * 10;
	if (number > 0)
		k = number;
	else
	{
		k = -number;
		count = 1;
	}
	i = 0;
	while (k != 0)
	{
		h = k % 10;
		str[i] = h + '0';
		k = k / 10;
		i++;
	}
	str[i] = '\0';
	if (afterdecimal > 0)
	{
		for (j = i; j > afterdecimal; j--)
			str[j] = str[j - 1];
		str[j] = '.';
		str[i + 1] = '\0';
		i = i + 1;
	}
	k = i;
	for (j = 0; j < i / 2; j++)
	{
		temp = str[k - 1];
		str[k - 1] = str[j];
		str[j] = temp;
		k--;
	}
	if (count == 1)
	{
		i = i + 1;
		for (j = i; j > 0; j--)
			str[j] = str[j - 1];
		str[i] = '\0';
		str[j] = '-';
	}

	
}
