----- 17.3 — Order of construction of derived classes -----
While creating object of derived class, constructor of most base class
is called first. Then derived class constructor is called.

A <- B <- C
Order of constructor call will be first A, then B and at last C.

Order of desctuctor call is exactly opposite to constructor call.

----- 17.4 — Constructors and initialization of derived classes -----
The base class constructor can be called from the initializer list of derived class.
Derived(): Base{}
{
}

----- 17.7 — Calling inherited functions and overriding behavior -----
If a function exist in both base and derived class, then the derived class function
will be called when using a derived class object.
If function did not exist in derived class, then compiler looks into the base class
to find the function and call it.

We can call base class function from derived class function of same name as follows,
Base::<function_name>()