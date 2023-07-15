// Diamond problem
// Diamond problem --->
// B1<-B2 , B1<-B3 , B2<-D, B3<-D.
// B1 constructor will be called twice due to B2 and B3.
// To prevent this make B2 and B3 virtual as follows
// 	class B2 : virtual public B
// 	class B3 : virtual public B
// 	class D : public B2, public B3  
// Now D can directly class B1 constructor
// 	D( int x ) : B1{x}, B2{x}, B3{x} {}

#include <iostream>

class A
{
public:
	int a;
	A( const int& num ) : a{ num } 
	{
		std::cout << "A\n";
	}
};

class B : virtual public A
{
public:
	int b;
	B( const int& num ) : b{ num }, A{ num + 1 } 
	{
		std::cout << "B\n";
	}
	void print()
	{
		std::cout << a << " " << b << std::endl;
	}
};

class C : virtual public A
{
public:
	int c;
	C( const int& num ) : c{ num }, A{ num + 1 }
	{
		std::cout << "C\n";
	}
	void print()
	{
		std::cout << a << " " << c << std::endl;
	}
};

class D : public B, public C
{
public:
	int d;
	D( const int& num ) : d{ num }, A{ num + 1 }, B{ num + 1 }, C{ num + 1 }
	{
		std::cout << "D\n";
	}
	void print()
	{
		std::cout << a << " " << b << " " << c << " " << d << std::endl;
	}
};

int main()
{
	D obj{ 89 };
	obj.print();
	std::cout << std::endl;

	B obj_b{ 67 };
	obj_b.print();
	std::cout << std::endl;

	C obj_c{ 47 };
	obj_c.print();
}

// Output

// A
// B
// C
// D
// 90 90 90 89

// A
// B
// 68 67

// A
// C
// 48 47