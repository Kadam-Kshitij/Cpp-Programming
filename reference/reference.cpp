#include <iostream>

int main()
{
	int a = 71;

	// int& ref;	// CTE - Refernce needs to be initialized at point of declaration
	int& ref = a;

	// int& const ref_2 = a;	// CTE - ‘const’ qualifiers cannot be applied to ‘int&’
	
	const int& ref_3 = a;		// No CTE
	// ref_3 = 89;				// CTE - assignment of read-only reference ‘ref_3’

	const int num = 90;
	// int& ref_4 = num;		// CTE - binding reference of type ‘int&’ to ‘const int’ discards qualifiers
	const int& ref_5 = num;		// No CTE
	// ref_5 = 76;				// CTE - assignment of read-only reference ‘ref_5’
}