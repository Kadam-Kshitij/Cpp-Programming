----- 11.1 — Arrays (Part I) -----
An array is an aggregate data type that lets us access many variables
of the same type through a single identifier.
Array indexing starts from 0.

Creating and accessing an array
int arr[20]{};
arr[13];

Arrays length should be known at compile time.
Hence we can use macro, constexpr, literal to denaote the array length.
int i = 23; is a run time constant. Hence cannot be used.
However due to compiler extensions, this will not throw an error at compile time.
By disabling the extensions by using -pedantic-errors flag, we get CTE.

----- 11.2 — Arrays (Part II) -----
Arrays can be initialized using list initialization.
int arr[5]{ 1, 2, 3, 4, 5 };

If more elements are specified than array length, then CTE occurs.
If less elements are specified, then remaining elements are zero initialized.

If initializer list is used, then we can omit the array length
int arr[]{ 1, 2, 3, 4, 5 };

Enums can be used for indexing.
Enum class cannot be used, since they are not implicitly converted to integers.
static_cast needs to be used in such cases.

If we index out of range array ( arr[6] = 23 for a arr of length 5 )
it does not cause CTE. It can override another variable. Can cause a crash.
Negative indexing is also possible.

When passing a variable to a function, it copies the argument into parameter.
But when array is passed, actual array gets passed because copying an array is expensive.

Passing array to a function
void foo( int arr[], int length ) or
void foo( int* ptr, int length )
foo( arr );

In the function where array is declared, sizeof returns the entire array size.
So length can be calculated as sizeof( arr )/sizeof( arr[0] )
In a function where array is passed, sizeof returns the size of pointer.
Hence sizeof( arr )/sizeof( arr[0] ) will return incorrect length.
When passing arr to function, it boils down to a pointer.

We can use std::size( arr ) to get the array length.
std::size cannot be used on array which has been passed from other function. Cause CTE.





A C-style string is simply an array of characters that uses a null terminator

To define a c-style string use the following syntax
char str[]{ "Abc" };
The null character is automatically added by the compiler. Hence the length is actual string length + 1.



3-----
plog

Dangling else
==
C++17 introduces the constexpr if statement, which requires the conditional to be a constant expression

If the constexpr conditional evaluates to true, the entire if-else will be replaced by the true-statement. If the constexpr conditional evaluates to false, the entire if-else will be replaced by the false-statement (if it exists) or nothing (if there is no else).

if constexpr (gravity == 9.8)

