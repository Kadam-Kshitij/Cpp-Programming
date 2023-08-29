13.5 — Constructors

When all members of a class (or struct) are public, we can use 
aggregate initialization to initialize the class (or struct) directly 
using list-initialization:

List initialization is generally preferred over the other 
initialization forms because it works in most cases, it disallows 
narrowing conversions, and it supports initialization with lists of 
values.
