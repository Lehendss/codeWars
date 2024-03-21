#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	remove_exclamation_marks(const	char *str_in, char *str_out)
{
	int	i = 0;
	int	j = 0;

	while (str_in[i])
	{
		while (str_in[i] == '!')
			i++;
	str_out[j++] = str_in[i++];
	}
	str_out[j] = '\0';

}

int	main(void)
{
	const char str[] = "a!Hello, my friends!";
	char	*str_out;
	
	str_out = (char *)malloc(sizeof(char) * strlen(str) + 1);

	remove_exclamation_marks(str, str_out);
	
	printf("String: %s\n", str_out);

	free(str_out);
	
	return (0);
}
