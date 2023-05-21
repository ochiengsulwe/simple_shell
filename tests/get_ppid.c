#include "main.h"
/**
 * get_ppid - prints the PID of the parent process
 * Return: returns nothing.
 *	prints ppid to stdout.
 */
void get_ppid(void)
{
	pid_t ppid;

	ppid = getppid();
	if (ppid == 0)
		printf("%d\n", getppid());
	printf("%d\n", ppid);
}
