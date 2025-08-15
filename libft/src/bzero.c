void *ft_bzero(void *str, unsigned int n)
{
	unsigned char *s = (unsigned char *)str;

	while(n--)
		*s++ = 0;
	return str;
}
