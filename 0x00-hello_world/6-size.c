 #include <stdio.h>
/**
 *main - for the main fuction
 *
 * Return: 0 when successful
 */

int main(void)
{
	printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of a int: %1u byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %1u byte(s)\n", (unsigned long)sizeof(long long));
	printf("Size of a float: %1u byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
