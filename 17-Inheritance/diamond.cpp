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

class B : public A
{
public:
	B()
	{
		std::cout << "B\n";
	}
	~B()
	{
		std::cout << "~B\n";
	}
};

class C : public A
{
public:
	C()
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
	D()
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
	D obj;
}

// Output

// A
// B
// A
// C
// D
// ~D
// ~C
// ~A
// ~B
// ~A

// Here we can see that A is called twice which is not correct.
// Ones because of B and ones because of C.