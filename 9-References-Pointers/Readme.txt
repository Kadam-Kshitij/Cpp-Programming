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

