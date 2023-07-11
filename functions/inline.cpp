#include <iostream>

class Base
{
public:
	void goo();
};

inline void Base::goo()
{
    std::cout << "Goo\n";
}

inline void foo()
{
	std::cout << "Foo\n";
}

int main()
{
	foo();

	Base b;
	b.goo();
}
