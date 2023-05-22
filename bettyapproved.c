nclude "main.h"
/**
 * cube_function - shows the cube of a number
 * @num: The number to be cubed
 * Return: cube function
 */
int cube_function(int num)
{
	int cube;

	cube = num * num * num
	return (cube);
}
/**
 * main - Entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	int number;
	int solution;

	printf("Enter number: ");
	scanf("%d", number);
	solution = cube_function(number);
	printf("The cube of %d is %d\n", number, solution);
	return (0);
}
