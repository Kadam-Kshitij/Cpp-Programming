// Use to find the appropriate up down cast to derived class from Base class.

#include <iostream>

class Base
{
public:
	// Atleast one virtual function is needed for dynamic cast to work
	virtual void foo()
	{
	}
};

class Derived1 : public Base
{
public:
	void foo() override
	{
		std::cout << "foo Derived1\n";
	}
};

class Derived2 : public Base
{
public:
	void foo() override
	{
		std::cout << "foo Derived2\n";
	}
};

int main()
{
	Derived1* ptr = new Derived1();
	Base* b = dynamic_cast< Base* >( ptr );

	Derived1* ptr1 = dynamic_cast< Derived1* >( b );
	if ( NULL == ptr1 )
	{
		std::cout << "ptr1 is NULL\n";
	}
	else
	{
		ptr1->foo();
	}

	Derived2* ptr2 = dynamic_cast< Derived2* >( b );
	if ( NULL == ptr2 )
	{
		std::cout << "ptr2 is NULL\n";
	}
	else
	{
		ptr2->foo();
	}

	Derived1& ref = *ptr;
	Base& b2 = dynamic_cast< Base& >( ref );

	try
	{
		Derived1& ref1 = dynamic_cast< Derived1& >( b2 );
		ref1.foo();
	}
	catch( ... )
	{
		std::cout << "ref1 exception\n";
	}

	try
	{
		Derived2& ref2 = dynamic_cast< Derived2& >( b2 );
		ref2.foo();
	}
	catch( std::bad_cast& ex )	// Bad cast exception
	{
		std::cout << "ref2 exception " << ex.what() << std::endl;
	}
}

// Output

// foo Derived1
// ptr2 is NULL
// foo Derived1
// ref2 exception std::bad_cast