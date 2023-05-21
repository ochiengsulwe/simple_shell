#include "main.h"
#include "utils.h"

int hsh_execute(char **args)
{
	int i;

	if (args[0] == NULL)
	{
		return (1);
	}
	for (i = 0; i < hsh_num_builtins(); i++)
	{
		if (strcmp(args[0], builtin_str[i]) == 0)
		{
			return(*builtin_func[i](args));
		}
	}
	return (hsh_launch(args));
}
