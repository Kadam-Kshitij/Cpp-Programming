----- 9.5 — Pass by lvalue reference -----
Pass by reference is used to avoid expensive copy operations.
void foo( int& x )
Here we can pass only non-const lvalues.


----- 9.6 — Pass by const lvalue reference -----
void foo( const int& x )
Here we can pass const lvalues, non-const lvalues, rvalues.
The passed argument cannot be modified in the function.

1) Copying class objects is expensive. Copying fundamental data types is cheap.
2) Accessing via reference is expensive than accessing variable directly.
So heavy objects should be passed by reference. Fundamental data types can be passed by value.


----- 9.7 — Introduction to pointers -----
int* ptr1, ptr2 // Here ptr2 will be of type int
int* ptr1, * ptr2 // Here both are pointers

Pointer of one type cannot point to variable of other data type.

Difference between pointers and references
1) Reference needs to be initialized. Pointers are not needed to be initialized.
2) Pointer can be changed to point somewhere else. References cannot.

Size of pointers depends on architecture of the machine.
On 32 bit machine it is 4 bytes, on 64 bit machine it is 8 bytes.

Dangling pointers are pointer pointing to address which no longer exist.


----- 9.9 — Pointers and const -----
int* ptr = &x;
Normal pointers can point to different location
and can also change the value of the variable it is pointing to.

const int x = 23;
int* ptr = &x;		// CTE
If we make a normal pointer point to a const variable, we get CTE.

const int* ptr = &x;
Here we can change where ptr is pointing to but cannot change the value by dereference.

int* const ptr = &x;
Here we can change value of variable pointed by ptr, but not where ptr is pointing.

const int* const ptr = &x;
Here we can neither change where ptr is pointing, nor value pointed by it.


