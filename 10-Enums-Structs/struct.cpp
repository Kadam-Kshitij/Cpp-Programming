#include <iostream>

// Creating a struct
struct Employee
{
	std::string name;
	int id;
	int age;
	double wage;
};

int main()
{
	Employee emp;	// Creating object of struct

	// Accessing struct member variables
	emp.name = "Kshitij";
	emp.id = 12345;
	emp.age = 30;
	emp.wage = 123456789.4;

	std::cout << "Employee details -\n";
	std::cout << emp.name << std::endl;
	std::cout << emp.id << std::endl;
	std::cout << emp.age << std::endl;
	std::cout << emp.wage << std::endl;
}

// Output

// Employee details -
// Kshitij
// 12345
// 30
// 1.23457e+08