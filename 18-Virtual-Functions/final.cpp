#include <iostream>

class Base
{
public:
	virtual void foo() const
	{
	}
};

class Derived : public Base
{
public:
	void foo() const override final
	{
	}
};

class Derived2 : public Derived
{
public:
	// CTE - since foo is maked as final in Derived class
	// void foo() const override
	// {
	// }
};

int main()
{
	Derived2 obj;
}