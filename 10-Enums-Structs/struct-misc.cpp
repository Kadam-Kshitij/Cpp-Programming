#include <iostream>

struct Emp
{
	int id{};
	int age{};
};

struct CEO
{
	Emp e{};
	int salary{};
};

struct s1
{
	int a;
	short b;
	short c;
};

struct s2
{
	short a;
	int b;
	short c;
};

int main()
{
	// Struct can have a struct inside it.
	// We can use nested initialization in such cases.
	CEO obj{ { 23, 56 }, 1000 };
	std::cout << "Emp - " << obj.e.id << " "
						<< obj.e.age << " "
						<< obj.salary << " " << std::endl;

	// Size of struct is atleast the sum of size of individual member variables.
	// But some times compiler adds padding for optimization. So the size can be larger.
	std::cout << sizeof( s1) << std::endl;		// 8
	std::cout << sizeof( s2 ) << std::endl;		// 12
}

// Output

// Emp - 23 56 1000
// 8
// 12