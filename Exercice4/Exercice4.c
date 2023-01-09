#include<stdio.h>
#include<stdlib.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	holder;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (tab[i] > tab[j])
			{
				holder = tab[i];
				tab[i] = tab[j];
				tab[j] = holder;
			}
		}
	}
}

int	main(void)
{
	int	tab[5];
	int	size;

	tab[0] = 10;
	tab[1] = 4;
	tab[2] = 26;
	tab[3] = 140;
	tab[4] = 2;
	size = 5;
	ft_sort_int_tab(tab, size);
	return (0);
}
