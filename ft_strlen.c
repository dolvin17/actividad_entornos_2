size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0; //contador igual a cero. 
	while (s[i] != '\0') //mientras mi string en la posicion i sea distinto de 0. 
		i++; //aumento mi iterador. 
	return (i); //retorno lo que pude iterar hasta este punto.
}
#include <stdio.h>
#include <string.h>
#include <erno.t>

int	main(void)
{
	printf("%zu\n", ft_strlen("Clarkent"));
	printf("%zu\n", ft_strlen("Hello"));
	printf("%zu\n", ft_strlen("-1"));
	printf("%zu\n", ft_strlen("Marvin"));
	printf("\n");
	printf("%zu\n", strlen("Clarkent"));
	printf("%zu\n", strlen("Hello"));
	printf("%zu\n", strlen("-1"));
	printf("%zu\n", strlen("Marvin"));
	return (0);
}
