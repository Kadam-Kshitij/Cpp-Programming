#include <iostream>

class A
{
public:
	A()
	{
		std::cout << "A\n";
	}
	~A()
	{
		std::cout << "~A\n";
	}
};

class B : virtual public A
{
public:
	B() : A{}
	{
		std::cout << "B\n";
	}
	~B()
	{
		std::cout << "~B\n";
	}
};

class C : virtual public A
{
public:
	C() : A{}
	{
		std::cout << "C\n";
	}
	~C()
	{
		std::cout << "~C\n";
	}
};

class D : public B, public C
{
public:
	D() : A{}, B{}, C{}
	{
		std::cout << "D\n";
	}
	~D()
	{
		std::cout << "~D\n";
	}
};

int main()
{
	D d;
	std::cout << "---\n";
	B b;
	std::cout << "---\n";
	C c;
}

// Output

// A
// B
// C
// D
// ---
// A
// B
// ---
// A
// C
// ~C
// ~A
// ~B
// ~A
// ~D
// ~C
// ~B
// ~A