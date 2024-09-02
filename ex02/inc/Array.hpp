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

		unsigned int const size();
};