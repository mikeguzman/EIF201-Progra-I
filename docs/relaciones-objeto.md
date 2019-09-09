# Relaciones de objeto

Hay muchos tipos diferentes de relaciones que dos objetos pueden tener en la vida real, y usamos palabras específicas de **"tipo de relación"** para describir estas relaciones. Por ejemplo: una forma cuadrada "es-a". Un carro "tiene-un" volante. Un programador de computadoras "usa un teclado". Una flor "depende" de una abeja para la polinización. Un estudiante es un "miembro de" una clase. Y su cerebro existe como "parte de usted".

## [Composición](../examples/04-rela-composicion/)

## [Agregación](../examples/04-rela-agregacion/)

### Asociación

- [Asociación Simple](../examples/04-rela-asociacion-simple/)

- Asociación Reflexiva

  - Relación con otros objetos del mismo tipo. Esto se llama asociación reflexiva. Un buen ejemplo de asociación reflexiva es la relación entre un curso universitario y sus requisitos previos (que también son cursos universitarios).

  - ```c++
    #include <string>
    class Curso
    {
    private:
        std::string nombre;
        Course *cursoPrerequisito;
     
    public:
        Curso(std::string &nnombre, Curso *cursoPrerequisito=nullptr):
            nombre(nombre), cursoPrerequisito(cursoPrerequisito)
        {}
    };
    ```

- Asociación Indirecta

  - En todos los casos anteriores, hemos utilizado un puntero para vincular objetos directamente. Sin embargo, en una asociación, esto no es estrictamente necesario. Cualquier tipo de datos que le permita vincular dos objetos es suficiente. En el siguiente ejemplo, mostramos cómo una clase Driver puede tener una asociación unidireccional con un automóvil sin incluir realmente un miembro de puntero de automóvil:

  - ```c++
    #include <iostream>
    #include <string>
     
    class Car
    {
    private:
    	std::string m_name;
    	int m_id;
     
    public:
    	Car(std::string name, int id)
    		: m_name(name), m_id(id)
    	{
    	}
     
    	std::string getName() { return m_name; }
    	int getId() { return m_id;  }
    };
     
    // Our CarLot is essentially just a static array of Cars and a lookup function to retrieve them.
    // Because it's static, we don't need to allocate an object of type CarLot to use it
    class CarLot
    {
    private:
    	static Car s_carLot[4];
     
    public:
    	CarLot() = delete; // Ensure we don't try to allocate a CarLot
     
    	static Car* getCar(int id)
    	{
    		for (int count = 0; count < 4; ++count)
    			if (s_carLot[count].getId() == id)
    				return &(s_carLot[count]);
    		
    		return nullptr;
    	}
    };
     
    Car CarLot::s_carLot[4] = { Car("Prius", 4), Car("Corolla", 17), Car("Accord", 84), Car("Matrix", 62) };
     
    class Driver
    {
    private:
    	std::string m_name;
    	int m_carId; // we're associated with the Car by ID rather than pointer
     
    public:
    	Driver(std::string name, int carId)
    		: m_name(name), m_carId(carId)
    	{
    	}
     
    	std::string getName() { return m_name; }
    	int getCarId() { return m_carId; }
     
    };
     
    int main()
    {
    	Driver d("Franz", 17); // Franz is driving the car with ID 17
     
    	Car *car = CarLot::getCar(d.getCarId()); // Get that car from the car lot
    	
    	if (car)
    		std::cout << d.getName() << " is driving a " << car->getName() << '\n';
    	else
    		std::cout << d.getName() << " couldn't find his car\n";
     
    	return 0;
    }
    ```



Tabla de resumen de la diferencia entre composición, agregación y asociación:

| Propiedad                                                  | Composición    | Agregación     | Asociación                     |
| :--------------------------------------------------------- | :------------- | :------------- | :----------------------------- |
| Tipo de Relación                                           | Todo/parte     | Todo/parte     | Sin relación                   |
| Los miembros pertenecen a multiples clases                 | No             | Sí             | Sí                             |
| La existencia de los miembros es administrado por la clase | Sí             | No             | No                             |
| Dirección                                                  | Unidireccional | Unidireccional | Unidireccional o bidireccional |
| Verbo relacionado                                          | Parte-de       | Tiene-a        | Utiliza-a                      |

## Dependencia

- Se produce una dependencia cuando un objeto invoca la funcionalidad de otro objeto para realizar una tarea específica. Esta es **una relación más débil que una asociación**, pero aún así, cualquier cambio en el objeto del que dependa puede interrumpir la funcionalidad en la persona que llama (dependiente). **Una dependencia es siempre una relación unidireccional.**

```c++
#include <iostream>
 
class Point
{
private:
    double m_x, m_y, m_z;
 
public:
    Point(double x=0.0, double y=0.0, double z=0.0): m_x(x), m_y(y), m_z(z)
    {
    }
 
    friend std::ostream& operator<< (std::ostream &out, const Point &point);
};
 
std::ostream& operator<< (std::ostream &out, const Point &point)
{
    // Since operator<< is a friend of the Point class, we can access Point's members directly.
    out << "Point(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ")";
 
    return out;
}
 
int main()
{
    Point point1(2.0, 3.0, 4.0);
 
    std::cout << point1;
 
    return 0;
}
```

Un buen ejemplo de una dependencia es `std :: cout` (de tipo `std :: ostream`). Las clases que usan `std :: cout` lo usan para realizar la tarea de imprimir algo en la consola, pero no de otra manera.

## Clases contenedoras

El uso de contenedores se usa diariamente, un ejemplo es el cereal para el desayuno viene en una caja, las páginas de un libro vienen dentro de una cubierta y una encuadernación, y puede almacenar cualquier cantidad de artículos en contenedores en su garaje. Sin contenedores, sería extremadamente inconveniente trabajar con muchos de estos objetos.

Del mismo modo, una clase contenedor es una clase diseñada para contener y organizar múltiples instancias de otro tipo (ya sea otra clase o un tipo fundamental). Existen muchos tipos diferentes de clases de contenedor, cada una de las cuales tiene varias ventajas, desventajas y restricciones en su uso. Con mucho, el contenedor más utilizado en la programación es el arreglo. Aunque C ++ tiene una funcionalidad incorporada, los programadores a menudo usarán una clase de contenedor de matriz (std :: array o std :: vector) en su lugar debido a los beneficios adicionales que brindan. A diferencia de las matrices integradas, las clases de contenedor de matrices generalmente proporcionan un cambio de tamaño dinámico (cuando se agregan o eliminan elementos), recuerdan su tamaño cuando se pasan a las funciones y realizan la verificación de límites. Esto no solo hace que las clases de contenedor de matriz sean más convenientes que las matrices normales, sino también más seguras.

Las clases de contenedores suelen implementar un conjunto mínimo de funcionalidades bastante estandarizado. La mayoría de los contenedores bien definidos incluirán funciones que:

- Crear un contenedor vacío (a través de un constructor)
- Inserte un nuevo objeto en el contenedor
- Eliminar un objeto del contenedor
- Informe el número de objetos actualmente en el contenedor
- Vacíe el contenedor de todos los objetos.
- Proporcionar acceso a los objetos almacenados.
- Ordenar los elementos (opcional)

### Tipos de contenedores

Las clases de contenedores generalmente vienen en dos variedades diferentes. 

1. Los **contenedores de valor** son composiciones que almacenan copias de los objetos que contienen (y, por lo tanto, son responsables de crear y destruir esas copias). 
2. Los **contenedores de referencia** son agregaciones que almacenan punteros o referencias a otros objetos (y, por lo tanto, no son responsables de la creación o destrucción de esos objetos).

A diferencia de la vida real, donde los contenedores pueden contener cualquier tipo de objeto que coloque en ellos, en C ++, los contenedores generalmente solo contienen un tipo de datos. Por ejemplo, si tiene una matriz de enteros, solo contendrá enteros. A diferencia de otros lenguajes, muchos contenedores C ++ no le permiten mezclar tipos arbitrariamente. Si necesita contenedores para contener enteros y dobles, generalmente tendrá que escribir dos contenedores separados para hacerlo (o usar plantillas, que es una característica avanzada de C ++). A pesar de las restricciones en su uso, los contenedores son inmensamente útiles y hacen que la programación sea más fácil, segura y rápida.

**IntArray.h**

```c++
#ifndef INTARRAY_H
#define INTARRAY_H
 
#include <cassert> // for assert()
 
class IntArray
{
private:
    int m_length;
    int *m_data;
 
public:
    IntArray():
        m_length(0), m_data(nullptr)
    {
    }
 
    IntArray(int length):
        m_length(length)
    {
        assert(length >= 0);
        if (length > 0)
            m_data = new int[length];
        else
            m_data = nullptr;
    }
 
    ~IntArray()
    {
        delete[] m_data;
        // we don't need to set m_data to null or m_length to 0 here, since the object will be destroyed immediately after this function anyway
    }
 
    void erase()
    {
        delete[] m_data;
        // We need to make sure we set m_data to nullptr here, otherwise it will
        // be left pointing at deallocated memory!
        m_data = nullptr;
        m_length = 0;
    }
 
    int& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }
 
    // reallocate resizes the array.  Any existing elements will be destroyed.  This function operates quickly.
    void reallocate(int newLength)
    {
        // First we delete any existing elements
        erase();
 
        // If our array is going to be empty now, return here
        if (newLength <= 0)
            return;
 
        // Then we have to allocate new elements
        m_data = new int[newLength];
        m_length = newLength;
    }
 
    // resize resizes the array.  Any existing elements will be kept.  This function operates slowly.
    void resize(int newLength)
    {
        // if the array is already the right length, we're done
        if (newLength == m_length)
            return;
 
        // If we are resizing to an empty array, do that and return
        if (newLength <= 0)
        {
            erase();
            return;
        }
 
        // Now we can assume newLength is at least 1 element.  This algorithm
        // works as follows: First we are going to allocate a new array.  Then we
        // are going to copy elements from the existing array to the new array.
        // Once that is done, we can destroy the old array, and make m_data
        // point to the new array.
 
        // First we have to allocate a new array
        int *data = new int[newLength];
 
        // Then we have to figure out how many elements to copy from the existing
        // array to the new array.  We want to copy as many elements as there are
        // in the smaller of the two arrays.
        if (m_length > 0)
        {
            int elementsToCopy = (newLength > m_length) ? m_length : newLength;
 
            // Now copy the elements one by one
            for (int index=0; index < elementsToCopy ; ++index)
                data[index] = m_data[index];
        }
 
        // Now we can delete the old array because we don't need it any more
        delete[] m_data;
 
        // And use the new array instead!  Note that this simply makes m_data point
        // to the same address as the new array we dynamically allocated.  Because
        // data was dynamically allocated, it won't be destroyed when it goes out of scope.
        m_data = data;
        m_length = newLength;
    }
 
    void insertBefore(int value, int index)
    {
        // Sanity check our index value
        assert(index >= 0 && index <= m_length);
 
        // First create a new array one element larger than the old array
        int *data = new int[m_length+1];
 
        // Copy all of the elements up to the index
        for (int before=0; before < index; ++before)
            data [before] = m_data[before];
 
        // Insert our new element into the new array
        data [index] = value;
 
        // Copy all of the values after the inserted element
        for (int after=index; after < m_length; ++after)
            data[after+1] = m_data[after];
 
        // Finally, delete the old array, and use the new array instead
        delete[] m_data;
        m_data = data;
        ++m_length;
    }
 
    void remove(int index)
    {
        // Sanity check our index value
        assert(index >= 0 && index < m_length);
 
        // If we're removing the last element in the array, we can just erase the array and return early
        if (m_length == 1)
        {
            erase();
            return;
        }
 
        // First create a new array one element smaller than the old array
        int *data = new int[m_length-1];
 
        // Copy all of the elements up to the index
        for (int before=0; before  < index; ++before)
            data[before] = m_data[before];
 
        // Copy all of the values after the removed element
        for (int after=index+1; after < m_length; ++after )
            data[after-1] = m_data[after];
 
        // Finally, delete the old array, and use the new array instead
        delete[] m_data;
        m_data = data;
        --m_length;
    }
 
    // A couple of additional functions just for convenience
    void insertAtBeginning(int value) { insertBefore(value, 0); }
    void insertAtEnd(int value) { insertBefore(value, m_length); }
 
    int getLength() { return m_length; }
};
 
#endif
```

main.cpp

```c++
#include <iostream>
#include "IntArray.h"
 
int main()
{
    // Declare an array with 10 elements
    IntArray array(10);
 
    // Fill the array with numbers 1 through 10
    for (int i=0; i<10; i++)
        array[i] = i+1;
 
    // Resize the array to 8 elements
    array.resize(8);
 
    // Insert the number 20 before element with index 5
    array.insertBefore(20, 5);
 
    // Remove the element with index 3
    array.remove(3);
 
    // Add 30 and 40 to the end and beginning
    array.insertAtEnd(30);
    array.insertAtBeginning(40);
 
    // Print out all the numbers
    for (int j=0; j<array.getLength(); j++)
        std::cout << array[j] << " ";
 
    return 0;
}
```



------

[Página de Inicio](https://github.com/mikeguzman/EIF201-Progra-I)

