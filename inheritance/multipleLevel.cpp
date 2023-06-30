// Base <- Derived1 <- Derived2

#include <iostream>

class Base
{
};

class Derived1 : public Base
{
};

class Derived2 : public Derived1
{
};

int main()
{
	Base b;
	Derived1 d1;
	Derived2 d2;
}