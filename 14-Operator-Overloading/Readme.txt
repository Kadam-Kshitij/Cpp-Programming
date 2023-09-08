----- 14.1 — Introduction to operator overloading -----
The following operators cannot be overloaded
1) Scope resolution ::
2) .*
3) .
4) Typeid
5) Casting operators
6) ?:

----- 14.2 — Overloading using friend function -----
Base + int is not same as int + Base
We need to write seperate operator+ overload functions for the two.
int opeator+( const Base& b, const int& i )
int opeator+( const int& i, const Base& b )
We can just call on from the other to rewite whole implementation.
The second version can just return b + i which will call the first implementation.

----- 14.4 — Overloading the I/O operators -----
std::ostream& operator<<( std::ostream& os, const Base& obj )
std::istream& operator>>( std::istream& is, Base& obj )
The return type needs to be by refeence so that multiple outputs can be cascaded.
std::cout << b1 << " " << b2 << std::endl;


----- 14.5 — Overloading operators using member functions -----
The overloaded operator must be added as a member function of class of left operant.
Since in << operator, cout is left operant, we cannot modify the cout class.
Hence << operator cannot be overloaded as a member function.
Similarly we cannot overload as a member function when the left operant is non accessibe.

