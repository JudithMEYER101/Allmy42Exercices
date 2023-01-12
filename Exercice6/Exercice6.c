#include<stdlib.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	alpha_state;
	int	i;
	
	i = 0;
	alpha_state = 0;
	while (str[i] != '\0')
	{
		if (sizeof(str[i]) != sizeof(char))
		{
			str[i] = 0;
			alpha_state = 0;
		}
		else
		{	
			printf("%c", str[i]);
			alpha_state = 1;
			i++;
		}

	}
	return (alpha_state);
}

int	main (void)
{
	char	*str;
	int	is_alpha;

	str = "oksure";
	is_alpha = ft_str_is_alpha(str);
	if (is_alpha = 1)
	{
		printf("\nit's text\n");
	}
	else
	{
		printf("\nit's not text\n");
	}
	return (0);
}
