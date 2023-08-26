#include <iostream>

struct Employee
{
	int id;
	int age{};
	double wage{234};
};

void print( const Employee& emp )
{
	std::cout << "Employee details -\n";
	std::cout << emp.id << std::endl;
	std::cout << emp.age << std::endl;
	std::cout << emp.wage << std::endl;
}

int main()
{
	// Three possible ways of aggregate initialization
	Employee emp1; 		// id - uninitialized, age - value initialized, wage - 234
	Employee emp2{}; 	// id, age - value initialized, wage - 234
	Employee emp3{23, 45, 67}; // id, age, wage - 23, 45, 67

	print( emp1 );
	print( emp2 );
	print( emp3 );
}

// Output

// Employee details -
// 2
// 0
// 234
// Employee details -
// 0
// 0
// 234
// Employee details -
// 23
// 45
// 67