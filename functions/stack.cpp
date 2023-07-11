#include <iostream>

int global = 0;

void foo()
{
	global++;
	std::cout << "Global = " << global << std::endl;
	foo();
}

int main()
{
	foo();
}