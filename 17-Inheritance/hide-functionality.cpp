#include <iostream>

class Base
{
public:
	int x{ 56 };
protected:
	int y{ 34 };
private:
	int z{ 12 };

public:
	void foo()
	{
		std::cout << "Foo\n";
	}
};

class Derived : public Base
{
public:
	using Base::y;
	// using Base::z; // CTE - z is not accessible

private:
	using Base::x;
	using Base::foo;
};

int main()
{
	Derived d;

	// Without using statement, following will give CTE.
	// We have changed access of y in Derived to public.
	std::cout << "y = " << d.y << std::endl;

	// We have made x private in Derived. So it is not accessible using derived object
	// std::cout << "x = " << d.x << std::endl;
	// However we can still static_cast to Base& and access x
	std::cout << "x = " << static_cast< Base& >( d ).x << std::endl;

	// d.foo();
	static_cast< Base& >( d ).foo();
}

// Output

// y = 34
// x = 56
// Foo