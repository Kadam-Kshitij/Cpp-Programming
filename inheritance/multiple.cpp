// Base1 <- Derived, Base2 <- Derived

#include <iostream>

class Base1
{
};

class Base2
{
};

class Derived : public Base1, public Base2
{
};

int main()
{
	Derived d;
}