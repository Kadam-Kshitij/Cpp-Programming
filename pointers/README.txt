int* x, y;  // Here x is a pointer but y is not.

This is illegal -
int x;
double* ptr = &x;

============ Arrays and pointers ============
char buff[20] = "abcdef";
cout << buff;   // This will print entire abcedf
int buff[3] = {0,1,2};
cout << buff;   // This will print the address of first array element
// To print address in first case need to convert to void pointer
cout << ( void* )buff;

a[i] Can be written as i[a] because a[i] is actually *( a + i ) = *( i + a ) = i[a]


============ Const Pointers ============
int a = 12, b = 13;
const int* ptr = &a;
ptr = &b;             // Legal
*ptr = 44;            // Illegal

int* const ptr = &a;
ptr = &b;             // Illegal
*ptr = 44;            // Legal

const int* const ptr = &a;
// Both ptr = &b and *ptr = 44 are illegal

const int a = 73;
int* ptr = &a; // CTE
int* const ptr = &a; // CTE
const int* ptr = &a; // No CTE

============ Dangling pointer ============
Pointer which points to a deallocated memory is called as dangling pointer.
int* ptr = new int;
delete ptr;
int a = *ptr; // Here ptr is already deleted.

============ Void pointers ============
Void pointers can point to any data type.
But since they have no idea where they are pointing to they cannot be used for dereference. Arithmatic operations can also be not performed.


============ Null pointers ============
Dereference a null pointer leads to undefined behavior.