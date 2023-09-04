#include <iostream>

class Base
{
};

class Derived final : public Base
{
};

// CTE - Cannot derive from Derived class since it is maked as final
// class Derived2 : public Derived
// {
// };

int main()
{
}