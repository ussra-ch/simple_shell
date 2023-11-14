#include "main.h"
/**
 * str_int - converts an integer to a string representation
 * @n: int
 * Return: duplication of buffer
*/
char *str_int(int n)
{
	char *arr;
	int i = 0;

	/* Allocate memory for the string representation */
	arr = (char *)malloc(20 * sizeof(char));

	if (n == 0)
		arr[i++] = '0';
	else
	{
		while (n > 0 && i < 20)
		{
			arr[i++] = (n % 10) + '0';
			n /= 10;
		}
	}
	arr[i] = '\0';
	shell_reverse(arr, i);
	return (shell_strdup (arr));
}
/**
 * shell_reverse - reverse a string
 * @str: the string
 * @len: the string's length
*/
void shell_reverse(char *str, int len)
{
	int s = 0; 
	int end = len - 1;
	char new;

	while (s < end)
	{
		/* Swap characters at start and end */
		new = str[s];
		str[s] = str[end];
		str[end] = new;

		/* Move towards the middle */
		s++;
		end--;
	}
}

void print_error(char *file_name, char *cmd, int i)
{
    char *index, msg[] = ": not found\n";

    index = str_int(i);
    write (STDERR_FILENO, file_name, shell_strlen(file_name));
    write (STDERR_FILENO, ": ", 2);
    write (STDERR_FILENO, index, shell_strlen(index));
    write (STDERR_FILENO, ": ", 2);
    write (STDERR_FILENO,  cmd, shell_strlen(cmd));
    write (STDERR_FILENO, msg, shell_strlen(msg));

    free(index);
}
