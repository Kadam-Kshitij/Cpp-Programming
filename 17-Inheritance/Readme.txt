----- 17.3 — Order of construction of derived classes -----
While creating object of derived class, constructor of most base class
is called first. Then derived class constructor is called.

A <- B <- C
Order of constructor call will be first A, then B and at last C.

Order of desctuctor call is exactly opposite to constructor call.

----- 17.4 — Constructors and initialization of derived classes -----
The base class constructor can be called from the initializer list of derived class.
Derived( const int& x ): Base{ x }
{
}

----- 17.7 — Calling inherited functions and overriding behavior -----
If a function exist in both base and derived class, then the derived class function
will be called when using a derived class object.
If function did not exist in derived class, then compiler looks into the base class
to find the function and call it.

We can call base class function fromgit  derived class function of same name as follows,
Base::<function_name>()

Problems will arise when we call friend function of Base class.
Since friend function of Base class are not part of Base class, we cannot call then
directly using scope resolution operator.
We need to make our object look like Base class object.
static_cast< Base >( obj );


----- 17.8 — Hiding inherited functionality -----
We can change the access specifier of Base class function in derived class 
public:
	using Base::foo();
We cannot change access of private members of Base class in derived class,
because they cannot be accessed by Derived class.
But we can make a public member in Base as private in Derived.
This way it cannot be accessed from outside.
But we can still cast to Base& and access the member, since it is public in Base.

We can also delete a function in derived class so that it cannot be called 
int foo() = delete;
However Base still has the function. We can call the function in following two ways
1)  d_obj.Base::foo();
2) static_cast< Base& >( d_obj ).foo();


----- 17.9 — Multiple inheritance -----
Multiple inheritance occurs when we inherit from two different Base class
A <- C and B <- C

If A and B has same named member variable or member function, then
we need to use the scope resolution operator to differentiate the two.
Base1::val
obj.Base1::foo();
The resolution string will become complex as the levels of inheritance will increase

Another problem with multiple inheritance is diamond problem.