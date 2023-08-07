Purpose of Unions in C/ C++
C++ProgrammingServer Side Programming
Union is a user-defined datatype. All the members of union share same memory location. Size of union is decided by the size of largest member of union. If you want to use same memory location for two or more members, union is the best for that.

Unions are similar to structures. Union variables are created in same manner as structure variables. The keyword “union” is used to define unions in C language.

Here is the syntax of unions in C language,

union union_name {
   member definition;
} union_variables;
Here,

union_name  − Any name given to the union.

member definition  − Set of member variables.

union_variable  − This is the object of union.

Here is an example of unions in C language,
