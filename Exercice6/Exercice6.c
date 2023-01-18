#include<stdlib.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				i++;
			}
		else
		{	
			return (0);
		}
	}
	return (1);
}

int	main(void)
{
	char	*str;
	int		is_alpha;

	is_alpha = 0;
	str = "oksure";
	is_alpha = ft_str_is_alpha(str);
	if (is_alpha == 1)
	{
		printf("\nit's text\n");
	}
	else
	{
		printf("\nit's not text\n");
	}
	return (0);
}
