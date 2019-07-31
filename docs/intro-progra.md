# Introducción a la programación en C++

## Ejemplos básicos:

1. [example_01.cpp](../examples/01_intro/01/example_01.cpp) Simple program that prints a line of text 
	- The ```main``` Function, Is a part of every C++ program. The parentheses after main indicate that main is a program building block called a function. C++ programs typically consist of one or more functions and classes.  Exactly one function in every program must be named main.
	- The ```std``` Namespace, the std:: before cout is required when we use names that we’ve brought into the program by the preprocessing directive #include <iostream>. The notation std::cout specifies that we are using a name, in this case cout, that belongs to namespace std.
	- Escape sequences](https://en.cppreference.com/w/cpp/language/escape), special characters within string literals and character literals
	- The ```return``` statement, is one of several means we’ll use to exit a function. When the return statement is used at the end of main, as shown here, the value 0 indicates that the program has terminated successfully.
[example_02.cpp]((../examples/02_intro/02/example_02.cpp)) Printing a line of text with multiple statements
1. [example_03.cpp]((../examples/03_intro/03/example_03.cpp)) Working with Integers
    - [Types](https://en.cppreference.com/w/cpp/language/types)
    - [Arithmetic operators](https://en.cppreference.com/w/cpp/language/operator_arithmetic)
1. [example_04.cpp]((../examples/04_intro/04/example_04.cpp)) Operators
    - [General operators](http://www.cplusplus.com/doc/tutorial/operators/)

## Introducción a clases y objetos

1. [myfirstclass.cpp](../examples/01_intro_objects/01/myfirstclass.cpp) Define class ```GradeBook``` with a member function ```displayMessage```, create a GradeBook object, and call its ```displayMessage``` function.
   - Class ```GradeBook```
     - Before function main can create a GradeBook object, we must tell the compiler what member functions and data members belong to the class. The GradeBook class definition contains a member function called displayMessage that displays a message on the screen.
     - By convention, the name of a user-defined class begins with a capital letter, and for readability.
     - The keyword public, is an access specifier, this member function appears after access specifier public: to indicate that the function is “available to the public”—that is, it can be called by other functions in the program (such as main), and by member functions of other classes (if there are any). Access specifiers are always followed by a colon (:). For the remainder of the text, when we refer to the access specifier public in the text, we’ll omit the colon as we did in this sentence.
     - Each function in a program performs a task and may return a value when it completes its task.
     - To define a function, you must specify a return type to indicate the type of the value returned by the function when it completes its task.
     - Return type void indicates that displayMessage will not return any data.
2. [mifirstclassarg.cpp](../examples/01_intro_objects/02/mifirstclassarg.cpp) Define class GradeBook with a member function that takes a parameter, create a GradeBook object and call its displayMessage function.

---

[Página de Inicio](https://github.com/mikeguzman/EIF201-Progra-I)

