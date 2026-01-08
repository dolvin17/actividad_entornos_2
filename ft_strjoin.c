char	*ft_strjoin(char const *s1, char const *s2)//strings a unir. 
{
	size_t	len;
	char	*str;

	if (!s1 || !s2)//si alguno de los strings es nullo. 
		return (NULL);//retorno null. 
	len = ft_strlen(s1) + ft_strlen(s2) + 1;//calculo y almaceno la longitud de los strings a unir.
	str = malloc(sizeof(char) * len);//reservo memoria de la lontigud total de salida.
	if (!str)//si la reserva falla
		return (NULL);//retorno null.
	ft_strlcpy(str, s1, len);//sino, copio en str, el s1 hasta len.
	ft_strlcat(str, s2, len);//contateno en str, el s2 hasta len.
	return (str);//devuelvo string modificado.
}
