// It is used to convert a pointer of some data type into a pointer of another data type,
// even if the data types before and after conversion are different.

#include <iostream>

struct Base
{
	int i = 89;
	float f = 23.5;
	char c = 'A';
	bool b = false;
};

int main()
{
	int val = 78;
	int* ptr = &val;

	std::cout << "ptr = " << *ptr << std::endl;

	double* ptr_d = reinterpret_cast< double* >( ptr );
	std::cout << "ptr_d = " << *ptr_d << std::endl;

	// double* ptr_d_2 = static_cast< double* >( ptr );	// CTE : Invalid static_cast

	Base* b = new Base;
	int* ptr_i = reinterpret_cast< int* >( b );
	std::cout << "i = " << *ptr_i << std::endl;
	ptr_i++;

	float* ptr_f = reinterpret_cast< float* >( ptr_i );
	std::cout << "f = " << *ptr_f << std::endl;
	ptr_f++;

	char* ptr_c = reinterpret_cast< char* >( ptr_f );
	std::cout << "c = " << *ptr_c << std::endl;
	ptr_c++;

	bool* ptr_b = reinterpret_cast< bool* >( ptr_c );
	std::cout << "b = " << *ptr_b << std::endl;
	ptr_b++;
}

// Output

// ptr = 78
// ptr_d = -1.52527e-143
// i = 89
// f = 23.5
// c = A
// b = 0