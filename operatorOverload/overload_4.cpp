// Using outside function

#include <iostream>

class Base
{
	int num;

public:
	Base( const int& val ) : num{ val } 
	{
	}

	void print() const
	{
		std::cout << "num = " << num << std::endl;
	}

	int get() const
	{
		return num;
	}

	void set( const int& val )
	{
		num = val;
	}
};

Base operator+( const Base& b1, const Base& b2 )
{
	Base obj{0};
	obj.set( b1.get() + b2.get() );
	return obj;
}

int main()
{
	Base b1{ 23 };
	Base b2{ 45 };

	Base b3 = b1 + b2;

	b3.print();
}

// Output

// num = 68