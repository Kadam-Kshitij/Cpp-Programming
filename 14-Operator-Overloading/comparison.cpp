#include <iostream>

class Base
{
	int val{};
public:
	Base( const int& x ) : val{ x }
	{
	}

	bool operator<( const Base& obj )
	{
		return val < obj.val;
	}
};

int main()
{
	Base b1{ 96 };
	Base b2{ 58 };

	if ( b1 < b2 )
	{
		std::cout << "b1 < b2\n";
	}
	else
	{
		std::cout << "b1 > b2\n";
	}
}

// Output

// b1 > b2