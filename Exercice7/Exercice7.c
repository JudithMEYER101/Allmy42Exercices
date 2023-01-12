#include<stdlib.h>
#include<stdio.h>

char	*ft_strupcase(char *str)
	{
		int	i;
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				printf("\nitsmajallright\n");
				i++;
			}
			else
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				printf("\n thataintmaj\n");
				str[i] = str[i] - 32;
				i++;
			}
			else
			{
				printf("\nError Format\n");
			}
		}
		
		return (str);
	}

int	main (void)
{
	char	*str;
	
	str = "EchecCritique";
	printf("\n%s\n", str);
	str = ft_strupcase(str);
	printf("\n%s\n", str);
	return (0);
}
