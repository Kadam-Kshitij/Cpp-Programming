#include <iostream>

struct Employee
{
	int id;
	int age;
};

// Passing struct to a function
void print( const Employee& emp )
{
	std::cout << "Employee - " << emp.id << " " << emp.age << std::endl;
}

// Return struct from a function
Employee getEmp()
{
	// In the case where the function has an explicit return type,
	// we can even omit the type in the return statement
	return { 23, 46 };
}

int main()
{
	Employee emp{ .id{ 54 }, .age{ 91 } };
	print( emp );
	print( getEmp() );
}

// Output

// Employee - 54 91
// Employee - 23 46