#include<stdlib.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	size;
	int	i;

	i = 0;	
	while(src[i] != '\0')
	{
		i = i + 1;
	}
	size = i + 1;
	dest =  malloc(size*sizeof(char));
	i = 0;
	while(i < size + 1)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return(dest);
}

int	main (void)
{
	char	*src;
	char	*dest;

	dest = NULL;
	src = (char*) malloc(100);
	scanf("%s", src);
	dest = ft_strcpy(dest, src);
	printf("%s", dest);
	free(src);
	free(dest);
	return (0);
}
