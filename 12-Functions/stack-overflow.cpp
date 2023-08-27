#include <iostream>

int global = 0;

void foo()
{
	if( true )
	{

		std::cout << "foo " << ++global << std::endl;
		foo();
	}
}

int main()
{
	foo();
}

// Segmentation fault occurs because of infinte function calls.