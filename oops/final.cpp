#include <iostream>

class Base
{
};

class Derived1 final : public Base
{
};

// CTE - Cannot derive since Derived1 is final
// class Derived2 : public Derived1
// {
// };


int main()
{
	std::cout << "Main\n" << std::endl;
}