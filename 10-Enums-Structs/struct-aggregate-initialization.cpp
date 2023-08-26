#include <iostream>

struct Employee
{
	std::string name;
	int id;
	int age;
	double wage;
};

void print( const Employee& emp )
{
	std::cout << "Employee details -\n";
	std::cout << emp.name << std::endl;
	std::cout << emp.id << std::endl;
	std::cout << emp.age << std::endl;
	std::cout << emp.wage << std::endl;
}

int main()
{
	// 1 - Three possible ways of aggregate initialization
	Employee emp{ "Kadam", 12345, 30, 123456789.4 };		// Preferred
	// Employee emp = { "Kadam", 12345, 30, 123456789.4 };	
	// Employee emp( "Kadam", 12345, 30, 123456789.4 );		// Possible in C++20 & above
	print( emp );

	// 2 - Assignment using initializer list
	emp = { "Qwerty", 9876, 89, 12345678.5 };
	print( emp );
	emp = { "Qwerty", 9876 }; // Here remaining values are value initialized
	print( emp );

	// 3 - Designated initializers
	Employee emp1{ .id{ 67 }, .wage{ 67.90 } };
	// Employee emp2{ .wage{ 67.90 }, .id{ 67 } }; // CTE - Order should remain same
	print( emp1 );

	// 4 - Assignment using Designated initializers
	emp1 = { .name{ "Alex" } };	// Remaining values are value initialized
	print( emp1 );
}

// Output

// Employee details -
// Kadam
// 12345
// 30
// 1.23457e+08
// Employee details -
// Qwerty
// 9876
// 89
// 1.23457e+07
// Employee details -
// Qwerty
// 9876
// 0
// 0
// Employee details -
// 
// 67
// 0
// 67.9
// Employee details -
// Alex
// 0
// 0
// 0