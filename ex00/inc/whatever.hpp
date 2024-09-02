template <typename T>
void	swap(T & a, T & b)
{
	T temp = b;
	b = a;
	a = temp;
}

template <typename T>
T const & min(T const & a, T const & b)
{
	return (a<b ? a : b);
}

template <typename T>
T const & max(T const & a, T const & b)
{
	return (a>b ? a : b);
}