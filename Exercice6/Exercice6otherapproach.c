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
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
			alpha_state = 1;
		}
		else
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			alpha_state = 1;
			i++;
		}
		else
		{	
			alpha_state = 0;
			str[i] = '\0';
		}

	}
	return (alpha_state);
}

int	main (void)
{
	char	*str;
	int	is_alpha;

	is_alpha = 0;
	str = "oksure";
	is_alpha = ft_str_is_alpha(str);
	if(is_alpha = 1)
	{
		printf("\nit's text\n");
	}
	else
	{
		printf("\nit's not text\n");
	}
	return (0);
}
