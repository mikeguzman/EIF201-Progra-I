# Manejo de Excepciones

## Lanzando excepciones

Usamos señales todo el tiempo en la vida real para notar que eventos particulares han ocurrido. Por ejemplo, durante el fútbol americano, si un jugador ha cometido una falta, el árbitro arrojará una bandera al suelo y silbará la jugada. Luego se evalúa y ejecuta una sanción. Una vez que se ha solucionado la penalización, el juego generalmente se reanuda normalmente.

## Poner throw, try, y catch juntos

### Ejemplo #1

```c++
#include <iostream>
#include <string>
 
int main()
{
    try
    {
        // Statements that may throw exceptions you want to handle go here
        throw -1; // here's a trivial example
    }
    catch (int x)
    {
        // Any exceptions of type int thrown within the above try block get sent here
        std::cerr << "We caught an int exception with value: " << x << '\n';
    }
    catch (double) // no variable name since we don't use the exception itself in the catch block below
    {
        // Any exceptions of type double thrown within the above try block get sent here
        std::cerr << "We caught an exception of type double" << '\n';
    }
    catch (const std::string &str) // catch classes by const reference
    {
        // Any exceptions of type std::string thrown within the above try block get sent here
        std::cerr << "We caught an exception of type std::string" << '\n';
    }
 
    std::cout << "Continuing on our merry way\n";
 
    return 0;
}
```

Resultado

```c++
We caught an int exception with value -1
Continuing on our merry way
```

### Ejemplo 2

```c++
#include <iostream>
 
int main()
{
    try
    {
        throw 4.5; // throw exception of type double
        std::cout << "This never prints\n";
    }
    catch(double x) // handle exception of type double
    {
        std::cerr << "We caught a double of value: " << x << '\n';
    }
 
    return 0;
}
```

Resultado

```c++
We caught a double of value: 4.5
```

### Ejemplo #3

```c++
#include "math.h" // for sqrt() function
#include <iostream>
 
int main()
{
    std::cout << "Enter a number: ";
    double x;
    std::cin >> x;
 
    try // Look for exceptions that occur within try block and route to attached catch block(s)
    {
        // If the user entered a negative number, this is an error condition
        if (x < 0.0)
            throw "Can not take sqrt of negative number"; // throw exception of type const char*
 
        // Otherwise, print the answer
        std::cout << "The sqrt of " << x << " is " << sqrt(x) << '\n';
    }
    catch (const char* exception) // catch exceptions of type const char*
    {
        std::cerr << "Error: " << exception << '\n';
    }
}
```

En este código, se le pide al usuario que ingrese un número. Si ingresan un número positivo, la instrucción if no se ejecuta, no se produce ninguna excepción y se imprime la raíz cuadrada del número. Como no se produce ninguna excepción en este caso, el código dentro del bloque catch nunca se ejecuta. El resultado es algo como esto:

```c++
Enter a number: 9
The sqrt of 9 is 3
```

Si el usuario ingresa un número negativo, lanzamos una excepción de tipo const char *. Debido a que estamos dentro de un bloque de prueba y se encuentra un controlador de excepciones coincidente, el control se transfiere inmediatamente al controlador de excepciones const char *. El resultado es:

```c++
Enter a number: -4
Error: Can not take sqrt of negative number
```

------

[Página de Inicio](https://github.com/mikeguzman/EIF201-Progra-I)

