# Relaciones de objeto

Hay muchos tipos diferentes de relaciones que dos objetos pueden tener en la vida real, y usamos palabras específicas de **"tipo de relación"** para describir estas relaciones. Por ejemplo: una forma cuadrada "es-a". Un carro "tiene-un" volante. Un programador de computadoras "usa un teclado". Una flor "depende" de una abeja para la polinización. Un estudiante es un "miembro de" una clase. Y su cerebro existe como "parte de usted".

- [Composición](../examples/04-rela-composicion/)

- [Agregación](../examples/04-rela-agregacion/)

- Asociación

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

------

[Página de Inicio](https://github.com/mikeguzman/EIF201-Progra-I)

