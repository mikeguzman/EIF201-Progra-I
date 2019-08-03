# Tutorial -Clase Racional-

El siguiente es el tutorial para poner en práctica el tema [Clases y Objetos](objetos-clases.md).

## Video de guía

En el siguiente enlace, podrá ver en detalle el video tutorial de este laboratorio.

[Laboratorio Números Racionales](https://youtu.be/UFVZ6AzVVWU)

## Contenido a evaluar

- Encapsulamiento y abstracción
- Uso adecuado de métodos mutadores y accesores

## Instrucciones

Se necesita implementar un conjunto básico de operaciones sobre fracciones. Una fracción es una representación de un número racional, de la forma:

![math](https://latex.codecogs.com/svg.latex?\Large&space;\frac{a}{b})

donde *a* y *b* son números enteros. El valor de *b* debe ser diferente de 0.

Detalles:

1. La fracción debe mantenerse en **su forma más simple**. 

2. Simplifique la fracción utilizando una función que **calcule el máximo común divisor**. 

   El máximo común divisor se puede calcular de la siguiente manera: si la división es exacta, el máximo común divisor es el divisor. De lo contrario, se debe volver a dividir, pero el dividendo es el anterior divisor y el divisor es el residuo de la división anterior, hasta que el resultado de la división sea exacto.

Se deberá implementar las siguiente operación aritmética: **Suma**

![math](https://latex.codecogs.com/svg.latex?\Large&space;\frac{a}{b}+\frac{c}{d}=\frac{(a*d)+(b*c)}{b*d})
## Preguntas generadoras

1. **¿La clase Racional, debe tener todos métodos los mutadores y accesores?**

   Cada vez que decidamos incluir métodos en una clase (así sean los métodos básicos como set y get), antes debemos cuestionarnos el porqué de incluir dichos métodos, no debemos  hacerlo de forma mecánica o sin analizar la situación particular.  

   En cuanto a los modificadores de acceso cuestionémonos  **¿es útil tener métodos que permita a otras clases conocer los atributos de un objeto Fraccion o Racional?** La respuesta es sí, es útil y necesario conocer el estado de un objeto Racional, ya pudiera requerirse para hacer algún otro calcula o realizar algún otro proceso. 

   En cuanto a los métodos de la clase cuestionémonos la misma pregunta ¿es útil tener métodos que nos permita cambiar los atributos de la Fraccion o del Racional (métodos accesores)? La respuesta es no,  pues no hay una razón funcional o lógica del porque cambiar un objeto Fraccion una vez fue creado. En el momento en que se crea un objeto Fraccion lo correcto es asignar en ese momento su estado, por lo cual dicho estado solo debería cambiar a causa de una posterior operación matemática, tal como simplificación, suma, resta, división, etc.
   
2. **¿Por qué la operaciones de fracciones se hacen dentro de la clase Fraccion o Racional, y no en otra clase diferente?** 

   Por encapsulamiento, esto ya que gracias al encapsulamiento se le confiere a la clase la responsabilidad de crear y  administrar laimplementación de sus instancias. 

## Desarrollo

1. Revisar el código del laboratorio en `tutorials\NumerosRacionales`

2. En proyectos de operaciones matemáticas, es recomendable buscar alguna herramienta, calculadora para comparar los resultados. En este caso recomendamos usar [https://www.wolframalpha.com](https://www.wolframalpha.com/) para verifcar los resultados.

3. Definimos nuestra operación de prueba:

   ![math](https://latex.codecogs.com/svg.latex?\Large&space;\frac{20}{8}+\frac{10}{4})

4. Evaluamos el resultado y verificado con [https://www.wolframalpha.com](https://www.wolframalpha.com/)

   ![math](https://latex.codecogs.com/svg.latex?\Large&space;\frac{20}{8}+\frac{10}{4}=\frac{5}{1})

5. Diseñamos nuestro diagrama UML a partir de las indicaciones del enunciado, podemos utilizar la herramienta [https://www.lucidchart.com](https://www.lucidchart.com/) para diseñar el diagrama de clases.

> `-` Indicates private
> `+` Indicates public
> `#` Indicates protected

![](https://www.lucidchart.com/publicSegments/view/f415808d-d9eb-437c-befe-1f0867081272/image.png)

6. Creamos nuestro proyecto C++ en el IDE correspondiente, y agregamos las clases necesarias definidas en el diagrama de clases.

7. Analizamos como desarrollar el código:

   - `void Racional::simplificarFraccion(Racional &fraccion)` es el método que nos va a permitir simplificar las fracciones a su forma mas simple, en el enunciado nos dice que debemos utilizar la forma de **máximo común divisor** ya que existen varios métodos para simplificar fracciones. 

     > [Simplificar o reducir fracciones](https://www.matesfacil.com/ESO/fracciones/simplificar/simplificar-reducir-fracciones-metodo-maximo-comun-divisor-ejercicios-resueltos.html)

     Este método retorna `void` y aunque parezca que no retorna nada, si retorna gracias al parámetro que le esta entrando por referencia `Racional &fraccion` el símbolo `&` le permite indicar al método que lo que se cargue por parámetro `&fraccion` y los cambios a la variable dentro del método `simplificarFraccion` se van a ver reflejados también fuera del método `void` gracias a la referencia que existe con el objeto.

     > [Parámetros por valor y por referencia](http://c.conclase.net/curso/?cap=015)

   - `int Racional::calcularMCD(int num, int den) ` es el método necesario para calcular el **máximo común divisor**. Tiene una particularidad es de **acceso privado**, esto se hizo así ya que se analiza que este método sólo se va a llamar dentro de la clase definida como `Racional.cpp` y no tiene motivos para ser utilizada desde fuera de este contexto.

     Retorna un entero `int` y tiene la particularidad que se llama a si mismo para seguir calculando el valor hasta que haya llegado a un punto de salida, el cual se logra cuando la verificación es igual a cero.

     ```c++
     if (den == 0) {
         resultado = num;
     } else {
         resultado = calcularMCD(den, num % den);
     }
     ```

	- `Racional Racional::sumFraccion(Racional fraccion) ` es el método definido para sumar las fracciones, el parámetro que le ingresa es un objeto de tipo `Racional`. Lo que ocurre dentro del método es básicamente es el proceso definido para sumar fracciones utilizando la simplificación de fracciones.
	
	  > [Suma y resta de fracciones](https://www.smartick.es/blog/matematicas/recursos-didacticos/suma-resta-de-fracciones/)

      ```c++
      Racional resultado;
      resultado.setNumerador(
      getNumerador() * fraccion.getDenominator() +
      getDenominator() * fraccion.getNumerador());
      resultado.setDenominator(getDenominator() * fraccion.getDenominator());
      simplificarFraccion(resultado);
      ```

	- `std::string Racional::obtenerString()` este método permite retornar el `String` de las propiedades dentro de la clase. Es un método bastante útil para mostrar los resultado en el `main` de la aplicación. 
	
	  ```c++
	  std::string resultado;
	  resultado = std::to_string(getNumerador()) + "/" + std::to_string(getDenominator());
	  ```

7. Analizamos como probar el código, para ello definimos dentro de nuestra clase `main.cpp` las sentencias necesarias para instanciar los objetos y las clases necesarias.

   ```c++
   #include <iostream>
   #include "Racional.h"
   
   int main() {
       Racional fraccionA(20, 8);
       Racional fraccionB(10, 4);
       Racional fraccionAux;
   
       std::cout << "\nTutorial -Números Racionales-\n" << std::endl;
   
       std::cout << "SIMPLIFICACIÓN de Fracción A: " << fraccionA.obtenerString() << std::endl;
       Racional::simplificarFraccion(fraccionA);
       std::cout << "RESULTADO: " << fraccionA.obtenerString() << std::endl;
   
       std::cout << "SIMPLIFICACIÓN de Fracción B: " << fraccionB.obtenerString() << std::endl;
       Racional::simplificarFraccion(fraccionB);
       std::cout << "RESULTADO: " << fraccionB.obtenerString() << std::endl;
   
       std::cout << "\nSUMAR FRACCIONES" << std::endl;
       fraccionAux = fraccionA.sumFraccion(fraccionB);
       std::cout << "RESULTADO: " << fraccionA.obtenerString() << " + " << fraccionB.obtenerString() <<
                 " = " << fraccionAux.obtenerString() << std::endl;
   
       return 0;
   }
   ```