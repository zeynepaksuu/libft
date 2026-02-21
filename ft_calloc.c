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

/*
int main()
{
    size_t count = 5;
    int *dizi;
    size_t i;

    dizi = (int *)ft_calloc(count, sizeof(int));

    if (dizi != NULL)
    {
        printf("ok\n");
        for (i = 0; i < count; i++)
        {
            printf("dizi[%zu] = %d\n", i, dizi[i]); 
        }
        free(dizi);
    }
    else
        printf("x\n");
    return (0);
}
*/