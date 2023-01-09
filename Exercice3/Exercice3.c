#include<stdlib.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	sec_tab[size];
	int	s_t_tracker;
	int	t_tracker;
	int	swap_tracker;
	int	i;

	i = size;
	t_tracker = size;
	s_t_tracker = 0;
	swap_tracker = 0;
	while (t_tracker > 0)
	{
		sec_tab[s_t_tracker] = tab[t_tracker - 1];
		s_t_tracker = s_t_tracker + 1;
		t_tracker = t_tracker - 1;
	}
	while (i > 0)
	{
		tab[swap_tracker] = sec_tab[swap_tracker];
		i = i - 1;
		swap_tracker = swap_tracker + 1;
	}
}

int	main(void)
{
	int	tab[4];
	int	size;

	size = 4;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 150;
	ft_rev_int_tab(tab, size);
	printf("\n%d %d %d %d\n", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}
