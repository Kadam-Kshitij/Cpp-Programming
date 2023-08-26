----- 10.5 — Struct -----
Struct are user defined data types which allow us to bundle together 
multiple variables into a single type.

Defining struct
struct <struct_name>
{
	<type> <var1_name>;
	<type> <var2_name>;
};
Eg -
struct Employee
{
	std::string Name;
	int id;
	int age;
	double wage;	
};

Creating objects of a struct
<struct_name> <object_name>;
Employee emp;

Accessing members
<object_name>.<var_name>
Eg - emp.Name


----- 10.6 — Struct aggregate initialization -----
This can be achived in three ways
1) Employee emp = { "Kadam", 23, 25 };	// copy-list initialization using braced list
2) Employee emp{ "Kadam", 23, 25 };		// list initialization using braced list
3) Employee emp( "Kadam", 23, 25 );		// Direct initialization. Possible in C++20 & above

The second way is the preferred way.
Each member in the struct is initialized in the order of declaration.
If less values are provided than the number of variables in a struct then,
remaining values are default/value initialized.

Assignment using initializer list
emp = { "Qwerty", 9876, 89, 12345678.5 };
emp = { "Qwerty", 9876 }; // Here remaining values are value initialized

Designated initializers
Employee emp1{ .id{ 67 }, .wage{ 67.90 } };
Order should remain same. Else CTE occurs.

Assignment using Designated initializers
emp1 = { .name{ "Alex" } };	// Remaining values are value initialized



----- 10.7 — Default member initialization -----
Eg - 
struct Employee
{
	int id;
	int age{};			// Value initialize
	double wage{234};
};

If values are not explicitly provided at time of initialization, default values are used
Employee emp1; 		// id - uninitialized, age - value initialized, wage - 234
Employee emp2{}; 	// id, age - value initialized, wage - 234

Explicit initialization values take precedence over default values
Employee emp3{23, 45, 67}; // id, age, wage - 23, 45, 67

If no explicit initializer values are provided for an aggregate,
then prefer value initialization 


----- 10.8 — Passing and returning structs -----
Generally struct are passed by reference to functions to avoid copy.


----- 10.9 — Struct misc -----
Struct can have a struct inside it.
We can use nested initialization in such cases.
Emp obj{ { 23, 56 }, 1000 };

Size of struct is atleast the sum of size of individual member variables.
But some times compiler adds padding for optimization. So the size can be larger.
eg - s1 has a size 8, but s2 has a size 12
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


----- 10.10 — Member selection with pointers and references -----
For pointers to struct use -> operator to access member variables
Employee emp = new Employee;
emp->id;