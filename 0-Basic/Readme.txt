----- 0.10 — Compiler Extension -----
C++ standards define how program should work in a particular situation.
However compilers make their own changes to the language to enhance compatibility.
These are called compiler extensions.

These extensions should be disable. This will allows us to follow proper C++ standard.
for g++ compiler add the -pedantic-errors flag in the compilatio step.
Eg - Array with run time contant are allowed without the above flag.
int a = 9;
int arr[a]{};