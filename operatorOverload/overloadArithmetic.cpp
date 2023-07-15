// Overload arithmetic operator

#include <iostream>

class Base
{
public:
	int num;

	Base( const int& val ) : num{ val } 
	{
	}

	void print() const
	{
		std::cout << "num = " << num << std::endl;
	}

	Base operator-( const Base& obj );
};

Base Base::operator-( const Base& b )
{
	Base obj{ num - b.num };
	return obj;
}

int main()
{
	Base b1{ 23 };
	Base b2{ 45 };

	Base obj = b1 - b2;
	obj.print();
}

// Output

// num = -22