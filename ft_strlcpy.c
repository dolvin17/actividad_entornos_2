size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize < 1) //si el tamaño de mi buffer es menor que 1
		return (ft_strlen(src)); //devuelvo la longitud de mi origen.
	i = 0; //seteo i a 0
	while (src[i] != '\0' && i < (dstsize - 1)) //mientras mi origen en la posicion i, sea distinto de contrabarra cero. Y mi acumulador sea menor que mi buffer menos 1 PARA EL CHAR NULO.
	{
		dst[i] = src[i]; //copio mi origen en el destino.
		i++; //y avanzo hasta cerrar el bucle.
	}
	dst[i] = '\0'; //por ultimo cierro con contrabarra cero mi destino. 
	i = ft_strlen(src); //i va a ser igual a la longitud de mi origen.
	return (i); //y retorno esa longitud. 
}
