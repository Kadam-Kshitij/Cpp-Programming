-- Const member function --
Member functions which cannot modify class member variables.
This helps in preventing accidental object modification.

-- Const object --
Object of class which cannot be modified ones created.

-- Syntax --
To make a member function constant, the term "const" is applied to
both the function prototype and the function definition header.
eg -> void foo() const;

-- Properties --
Non-const object can call both const and non-const member functions.
const object can call only const member functions.

-- Function overload --
Same function name one with and one without const can be overloaded.
In such cases const object calls const overloaded member function
and non const object calls non const overloaded member function.

-- Initialization --
To create a const object of a class it is necessary to initialize
the member variables at the time of creation.
Either default value ( int val = 9; ) or
atleast empty constructor is needed to create a const object.

-- Mutable --
By declaring a class member variable as mutable it becomes possible to
modify the variable in const member functions.
