----- 18.1 — Pointers and references to the base class of derived objects -----
Pointers and references to Base class can be created using Derived class object
Base* ptr = &d_obj;
Base& ref = d_obj;
Using these ptr and ref we can only access Base class members.

However it is benificial if we could access Derived class member functions
via Base class pointers or references.
This way we can create single array for dfferent Derived classes
Base* ptr{ &Derived1, &Derived2, &Derived3 };
Also we can create single function which can accept different derived classes
void foo( Base* ptr )
foo( &Derived1 );
foo( &Derived2 );


----- 18.2 — Virtual functions and polymorphism -----
A virtual function is a special type of function which resolvs to the most derived
version of the function. This happens if we make a call using pointer/reference
to the base function. If we call directly using base class object it will
resolve to the Base class version of the function.
To call base version of the function explicitly, use scope-resolution operator.
ptr->Base::foo();

While overriding we need to use same signature and return type.

If a function is virtual, all matching overrides in derived classes are implicitly
virtual even if we do not specify the virtual keyword.

Calling virtual functions is expensive than normal functions.
1) Compiler has to resolve which version of the function needs to be called.
2) Has to allocate a virtual pointer.


----- 18.3 — The override and final specifiers -----
Use override keyword in derived class as follows
void foo( const int& val ) const override;
If signature or return type differs from the Base class version of the function
then a CTE is thrown.

Final
1) Class marked as final cannot be derived from
class Derived final : public Base
2) Function maked as final cannot be overriden in derived class
void foo( const int& val ) const override final

Covariant return types
The return type of a function and its override must match.
However in one case it can differ, Base version can return pointer to Base class
and Derived version can return a pointer to Derived class.
In this case if we call the function using Base class pointer generated from Derived
class object, then Derived* is returned but is upcasted to Base*


----- 18.4 — Virtual destructors, virtual assignment, overriding virtualization -----
If we try to delete using Base* created from Derived class, then 
only Base class destructor will be called.
However we need to delete the derived part as well. For this reason we need to make
Base class destructor as virtual.


----- 18.5 — Early binding and late binding -----
Early binding happens when function to be called can be resolved at compile time.
This happens when we make drect function calls.
Late binding happens when the function to be called is resolved at runtime.
One way when late binding happens is using function pointers.
Another way is using virtual functions.


----- 18.6 — The virtual table -----
The virtual table is a lookup table of functions used to resolve function calls
in a dynamic/late binding manner.
Every class which has a virtual function, has its own vtable.
A virtual table contains one entry for each virtual function that can be called by
objects of the class. Each entry in this table is simply a function pointer that
points to the most-derived function accessible by that class.

The compiler also adds a hidden pointer that is a member of the base class,
which we will call *__vptr
This causes the class size to increase by size of one pointer.

When object is created, the pointer is set to point to the vtable of that class.

Derived obj; // vptr points to Derived vtable
Base* ptr = &obj; // vptr still points to Derived vtable

Base obj; // Here vptr points to Base vtable

https://www.learncpp.com/cpp-tutorial/the-virtual-table/


----- 18.7 — Pure virtual functions, abstract and interface classes -----
Pure virtual functions can be created as follows
virtual void foo() const = 0;
They have no body, only declaration.

Class having one or more pure virtual function is called abstract class.
Such classes cannot be instantiated.

If Derived class does not implement the pure virtual function, then
the derived class remains abstract and cannot be instantiated.

Still it is possible to create pure virtual function with body.
We need to provide the function body seperately and not inline. While declaring
the function we need to make it =0;
We can then call the function from Derived class using scope resolution operator
Base::foo();
Base class still cannot be instantiated.

Interface class is a class which has all its member functions as pure virtual
and no member variables.


----- 18.8 — Virtual base classes -----
To solve the diamond problem, we can use virtual base class.
Simply insert the “virtual” keyword in the inheritance list of the derived class.
Base object is shared between all objects in inheritance tree & is constructed once.

A <- B, A <- C, B <- D, B <- D.
Class A gets constructed twice.

To resolve this inherit class B and class C virtually.
class B : virtual public A
class C : virtual public A

Class D is responsible to create Class A.
Class C and B still have calls to constructor of Class A. Bt these get used only
when we create objects of Class C and Class B. They are ignored while creting Class D


----- 18.9 — Object slicing -----
If we assign a Derived class object to a Base object, only the Base portion is
copied. The Derived portion gets sliced off.
Base obj = obj_d;

FrankenObject
Derived d1;
Derived d2;
Base& b{ d1 };
b = d2;
Here only Base portion of d2 gets copied into d1.


----- 18.10 — Dynamic casting -----
Dynamic cast is used to downcast Base pointer or reference to Derived pointer
or reference.
If casting fails in case of pointers, a NULL pointer is returned.
If casting fails in case of references, a bad_cast exception is returned.

Dynamic cast can fail in case, we try to downcast a Base pointer which actually
points to a Base class object. Or if we try to downcast to wrong Derived class.

Atleast one virtual function is needed to use dynamic_cast.
Also cannot be used with private or protected inheritance.

static_cast will work in downcasting, but may cause wrong results.
It can downcast a Base* which actually is a pointer to Base object.