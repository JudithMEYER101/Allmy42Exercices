#include<stdlib.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	tab1_value;
	int	tab2_value;
	int	result;

	i = 0;
	result = 0;
	while (s1[i] != '\0')
	{
		tab1_value += s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		tab2_value += s2[i];
		i++;
	}
	result = tab1_value - tab2_value;
	if (result == 0)
	{
		printf("\ns1 and s2 are equal\n");
		return (0);
	}
	if (result > 0)
	{
		printf("\n s1 is greater than s2 (%d)\n", result);
		return (result);
	}
	else
	{
		printf("\n s2 is greater than s1 (%d)\n", result);
		return (result);
	}
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "PlusGrand";
	s2 = "petit";
	ft_strcmp(s1, s2);
	return (0);
}
