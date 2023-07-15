#include <iostream>

class Base
{
	float val = 89;
public:
	friend void print( const Base& b );
};

void print( const Base& b )
{
	std::cout << "val = " << b.val << std::endl;
}

int main()
{
	Base b;

	print( b );
}

// Output

// val = 89