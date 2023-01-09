#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	nbchar;

	nbchar = 0;
	while (str[nbchar] != '\0')
	{
		nbchar = nbchar + 1;
	}
	return (nbchar);
}

int	main(void)
{
	char	*str;
	int		str_len;

	str = "EchecCritique";
	str_len = ft_strlen(str);
	printf("\n%d\n", str_len);
	return (0);
}
