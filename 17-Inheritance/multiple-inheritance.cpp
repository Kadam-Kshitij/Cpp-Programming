#include <iostream>

class Base1
{
protected:
	int val;
public:
	Base1( const int& x ) : val{ x }
	{
	}
};

class Base2
{
protected:
	int val;
public:
	Base2( const int& x ) : val{ x }
	{
	}
};

class Derived : public Base1, public Base2
{
public:
	Derived( const int& x, const int& y ) : Base1{ x }, Base2{ y }
	{
	}

	void print() const
	{
		// Since val is present in both Base1 and Base2
		// we need to use Scope resolution operator to differentiate
		std::cout << Base1::val << std::endl;
		std::cout << Base2::val << std::endl;

		// std::cout << val << std::endl;	// CTE - reference to val is ambiguous
	}
};


int main()
{
	Derived obj{ 12, 78 };
	obj.print();
}

// Output

// 12
// 78