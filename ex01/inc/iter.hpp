template <typename T>
void iter (T *tab, unsigned int len, void (*f)(T &))
{
	unsigned int i = 0;
	while (i < len)
		f(tab[i++]);
}

template <typename T>
void addOne2(T something)
{
	something++;
}
