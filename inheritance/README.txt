===== Inheritance types =====
1) Single : A <- B
2) Multiple level : A <- B <- C
3) Multiple : A <- C , B <- C
4) Heirarchical : Tree structure
5) Hybrid : Combination of any of the above

===== Order of constructor call =====
Base class constructor is called first, then derived class constructor is called.
Destructor call is exactly opposite to constructor call.

Base()
Derived()
~Derived()
~Base()

In case of multiple inhertance -
If we use class Derived : public Base2, public Base1
then Base2 constructor is called first, then Base1 and then Derived.

If we use class Derived : public Base1, public Base2
then Base1 constructor is called first, then Base2 and then Derived.


