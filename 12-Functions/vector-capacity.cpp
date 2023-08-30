#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1, 45, 67 };
	std::cout << "Vector size = " << v.size() << std::endl;
	std::cout << "Vector capacity = " << v.capacity() << std::endl;

	v.push_back( 34 );
	std::cout << "Vector size = " << v.size() << std::endl;
	std::cout << "Vector capacity = " << v.capacity() << std::endl;
}

// Output

// Vector size = 3
// Vector capacity = 3
// Vector size = 4
// Vector capacity = 6