void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (count != 0 && (count * size) / count != size)
		return (NULL);

	total = count * size;
	ptr = malloc(total);

	if (!ptr)
		return (NULL);

	ft_bzero(ptr, total);

	return (ptr);
}