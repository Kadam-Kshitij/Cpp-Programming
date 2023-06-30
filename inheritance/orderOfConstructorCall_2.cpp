// If we use class Derived : public Base2, public Base1 then Base2 constructor is called first.
// If we use class Derived : public Base1, public Base2 then Base1 constructor is called first.

#include <iostream>

class Base1
{
public:
	Base1()
	{
		std::cout << "Base1()\n";
	}
	~Base1()
	{
		std::cout << "~Base1()\n";
	}
};

class Base2
{
public:
	Base2()
	{
		std::cout << "Base2()\n";
	}
	~Base2()
	{
		std::cout << "~Base2()\n";
	}
};

// Case-1
// class Derived : public Base1, public Base2
// {
// public:
// 	Derived()
// 	{
// 		std::cout << "Derived()\n";
// 	}
// 	~Derived()
// 	{
// 		std::cout << "~Derived()\n";
// 	}
// };

// Case-2
class Derived : public Base2, public Base1
{
public:
	Derived()
	{
		std::cout << "Derived()\n";
	}
	~Derived()
	{
		std::cout << "~Derived()\n";
	}
};

int main()
{
	Derived d;
}

// Output

// Case-1
// Base1()
// Base2()
// Derived()
// ~Derived()
// ~Base2()
// ~Base1()

// Case-2
// Base2()
// Base1()
// Derived()
// ~Derived()
// ~Base1()
// ~Base2()