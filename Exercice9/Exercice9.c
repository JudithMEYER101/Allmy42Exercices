#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	mult;
	int	result;
	int	blank_ctr;
	int	sign_ctr;
	int	minus_ctr;
	char	*number;

	number = malloc(100 * sizeof (char));
	result = 0;
	i = 0;
	j = 0;
	mult = 1;
	blank_ctr = 0;
	sign_ctr = 0;
	minus_ctr = 0;
	while (isspace(str[blank_ctr]) != 0)
	{
		blank_ctr++;
	}
	while (str[blank_ctr + sign_ctr] == 43 || str[blank_ctr + sign_ctr] == 45)
	{
		if (str[blank_ctr + sign_ctr] == 45)
		{
			minus_ctr++;
		}
		sign_ctr++;
	}
	while (48 <= str[blank_ctr + sign_ctr + i] && str[blank_ctr + sign_ctr + i] <= 57)
	{
		number[i] = str[blank_ctr + sign_ctr + i];
		i++;
	}
	number[i] = '\0';
	j = i - 1;
	while (j >= 0)
	{
		if (number[j] == 48)
		{
			result += 0 * mult;
			j--;
			mult *= 10;
		}
		else
			if (number[j] == 49)
			{
				result += 1 * mult;
				j--;
				mult *= 10;
			}
		else
			if (number[j] == 50)
			{
				result += 2 * mult;
				j--;
				mult *= 10;
			}
		else
			if (number[j] == 51)
			{
				result += 3 * mult;
				j--;
				mult *= 10;
			}
		else
			if (number[j] == 52)
			{
				result += 4 * mult;
				j--;
				mult *= 10;
			}
		else
			if (number[j] == 53)
			{
				result += 5 * mult;
				j--;
				mult *= 10;
			}
		else
			if (number[j] == 54)
			{
				result += 6 * mult;
				j--;
				mult *= 10;
			}
		else
			if (number[j] == 55)
			{
				result += 7 * mult;
				j--;
				mult *= 10;
			}
		else
			if (number[j] == 56)
			{
				result += 8 * mult;
				j--;
				mult *= 10;
			}
		else
			if (number[j] == 57)
			{
				result += 9 * mult;
				j--;
				mult *= 10;
			}
	}
	free(number);
	if (minus_ctr % 2 == 0)
	{
		return (+result);
	}
	else
	{
		return (-result);
	}
}

int	main(void)
{
	char	*str;
	int	result;

	result = 0;
	str = "   ---+--30054kT62";
	result = ft_atoi(str);
	printf("\n%d\n", result);
	return (0);
}
