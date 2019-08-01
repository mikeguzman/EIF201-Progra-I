# Tutorial -Clase Racional-

El siguiente es el tutorial para poner en práctica el tema [Clases y Objetos](objetos-clases.md).

## Contenido a evaluar

- Encapsulamiento y abstracción
- Uso adecuado de métodos mutadores y accesores

## Instrucciones

Se necesita implementar un conjunto básico de operaciones sobre fracciones. Una fracción es una representación de un número racional, de la forma:
$$
\frac{a}{b}
$$
donde *a* y *b* son números enteros. El valor de *b* debe ser diferente de 0.

Detalles:

1. La fracción debe mantenerse en **su forma más simple**. 

2. Simplifique la fracción utilizando una función que **calcule el máximo común divisor**. 

   El máximo común divisor se puede calcular de la siguiente manera: si la división es exacta, el máximo común divisor es el divisor. De lo contrario, se debe volver a dividir, pero el dividendo es el anterior divisor y el divisor es el residuo de la división anterior, hasta que el resultado de la división sea exacto.

Se deberá implementar las siguiente operación aritmética: **Suma**

$$
\frac{a}{b} + \frac{c}{d} = \frac{(a * d) + (b * c)}{b * d}
$$

## Preguntas generadoras

1. **¿La clase Racional, debe tener todos métodos los mutadores y accesores?**

   Cada vez que decidamos incluir métodos en una clase (así sean los métodos básicos como set y get), antes debemos cuestionarnos el porqué de incluir dichos métodos, no debemos  hacerlo de forma mecánica o sin analizar la situación particular.  

   En cuanto a los modificadores de acceso cuestionémonos  **¿es útil tener métodos que permita a otras clases conocer los atributos de un objeto Fraccion o Racional?** La respuesta es sí, es útil y necesario conocer el estado de un objeto Racional, ya pudiera requerirse para hacer algún otro calcula o realizar algún otro proceso. 

   En cuanto a los métodos de la clase cuestionémonos la misma pregunta ¿es útil tener métodos que nos permita cambiar los atributos de la Fraccion o del Racional (métodos accesores)? La respuesta es no,  pues no hay una razón funcional o lógica del porque cambiar un objeto Fraccion una vez fue creado. En el momento en que se crea un objeto Fraccion lo correcto es asignar en ese momento su estado, por lo cual dicho estado solo debería cambiar a causa de una posterior operación matemática, tal como simplificación, suma, resta, división, etc.
   
2. **¿Por qué la operaciones de fracciones se hacen dentro de la clase Fraccion o Racional, y no en otra clase diferente?** 

   Por encapsulamiento, esto ya que gracias al encapsulamiento se le confiere a la clase la responsabilidad de crear y  administrar laimplementación de sus instancias. 