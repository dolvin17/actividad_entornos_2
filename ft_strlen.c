size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0; //contador igual a cero. 
	while (s[i] != '\0') //mientras mi string en la posicion i sea distinto de 0. 
		i++; //aumento mi iterador. 
	return (i); //retorno lo que pude iterar hasta este punto.
}
