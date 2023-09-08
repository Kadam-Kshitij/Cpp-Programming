#include <iostream>

class Base
{
	int val{};
public:
	Base( const int& x ) : val{ x }
	{
	}

	void print() const
	{
		std::cout << "val = " << val << std::endl;
	}

	friend Base operator+(const Base& obj1, const Base& obj2);
};

Base operator+(const Base& obj1, const Base& obj2)
{
	// Friend function have direct access to private members
	Base obj{ obj1.val + obj2.val };
	return obj;
}


int main()
{
	Base b1{ 90 };
	Base b2{ 64 };

	Base b = b1 + b2;
	b.print();
}

// Output

// val = 154