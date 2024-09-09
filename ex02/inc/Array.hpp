#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <cstdlib>
# include <iostream>

template <typename T>
class Array
{
	private:
		T*				_data;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array & copy);

		Array &operator=(Array & copy);
		T &operator[](unsigned int index);

		~Array();

		unsigned int size() const;

		class OutOfRangeException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
};

#endif