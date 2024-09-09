#include "Array.hpp"

template <typename T>
Array<T>::Array() : _data(NULL), _size(0)
{
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()) , _size(n)
{
	return ;
}

template <typename T>
Array<T>::Array(Array & copy)
{
	if (this != &copy)
	{
		_size = copy._size;
		_data = new T[_size];
		unsigned int i = 0;
		while (i < _size)
		{
			_data[i] = copy._data[i];
			i++;
		}
	}
	return ;
}

template <typename T>
Array<T> &Array<T>::operator=(Array & copy)
{
	if (this != &copy)
	{
		delete[] _data;
		_size = copy._size;
		_data = new T[_size];
		unsigned int i = 0;
		while (i < _size)
		{
			_data[i] = copy._data[i];
			i++;
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
	return ;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw OutOfRangeException();
	return _data[index];
}

template <typename T>
const char *Array<T>::OutOfRangeException::what() const throw()
{
	return ("Index out of range");
}
