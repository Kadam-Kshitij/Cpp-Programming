#include <iostream>

class Base
{
public:
	virtual void foo() const = 0;
};

class Derived1 : public Base
{
public:
	void foo() const override
	{
		std::cout << "Derived1 - foo\n";
	}
};

class Derived2 : public Base
{
public:
	void foo() const override
	{
		std::cout << "Derived2 - foo\n";
	}
};

int main()
{
	Derived1* d1 = new Derived1{};

	Base* ptr = dynamic_cast< Base* >( d1 );

	Derived1* ptr_1 = dynamic_cast< Derived1* >( ptr );
	if( nullptr == ptr_1 )
	{
		std::cout << "Null - ptr_1\n";
	}
	else
	{
		ptr_1->foo();
	}

	Derived2* ptr_2 = dynamic_cast< Derived2* >( ptr );
	if( nullptr == ptr_2 )
	{
		std::cout << "Null - ptr_2\n";
	}
	else
	{
		ptr_2->foo();
	}

	Base& ref = dynamic_cast< Base& >( *d1 );

	try
	{
		Derived1& ref_1 = dynamic_cast< Derived1& >( ref );
		ref_1.foo();
	}
	catch( std::exception& ex )
	{
		std::cout << ex.what() << std::endl;
	}

	try 
	{
		Derived2& ref_2 = dynamic_cast< Derived2& >( ref );
		ref_2.foo();
	}
	catch( std::exception& ex )
	{
		std::cout << ex.what() << std::endl;
	}
}

// Output
//
// Derived1 - foo
// Null - ptr_2
// Derived1 - foo
// std::bad_cast