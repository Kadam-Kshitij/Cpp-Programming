#include <iostream>

class A
{
public:
	A()
	{
		std::cout << "A constructor\n";
	}
	~A()
	{
		std::cout << "~A desctuctor\n";
	}
};

class B: public A 
{
public:
	B()
	{
		std::cout << "B constructor\n";
	}
	~B()
	{
		std::cout << "~B desctuctor\n";
	}
};

class C: public B
{
public:
	C()
	{
		std::cout << "C constructor\n";
	}
	~C()
	{
		std::cout << "~C desctuctor\n";
	}
};

class D: public C
{
public:
	D()
	{
		std::cout << "D constructor\n";
	}
	~D()
	{
		std::cout << "~D desctuctor\n";
	}
};


int main()
{
	D d{};
}

// Output

// A constructor
// B constructor
// C constructor
// D constructor
// ~D desctuctor
// ~C desctuctor
// ~B desctuctor
// ~A desctuctor