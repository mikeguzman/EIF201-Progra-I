# Agregación

Para calificar como una **agregación**, un objeto completo y sus partes deben tener la siguiente relación:

> - La parte (miembro) es parte del objeto (clase)
> - La parte (miembro) puede pertenecer a más de un objeto (clase) a la vez
> - La parte (miembro) no tiene su existencia administrada por el objeto (clase)
> - La parte (miembro) no sabe acerca de la existencia del objeto (clase)

Como una composición, una agregación sigue siendo una relación parcial. Sin embargo, a diferencia de una composición, **las partes pueden pertenecer a más de un objeto a la vez**, y el objeto completo no es responsable de la existencia y la vida útil de las partes. Cuando se crea una agregación, la agregación no es responsable de crear las partes. Cuando se destruye una agregación, la agregación no es responsable de destruir las partes.

La relación entre una persona y su domicilio. En este ejemplo, por simplicidad, diremos que cada persona tiene una dirección. Sin embargo, esa dirección puede pertenecer a más de una persona a la vez: por ejemplo, tanto a usted como a su compañero de habitación u otra persona. Sin embargo, esa dirección no es administrada por la persona; la dirección probablemente existía antes de que la persona llegara allí, y existirá después de que la persona se haya ido.

## Implementando agregaciones

Debido a que las agregaciones son similares a las composiciones en el sentido de que ambas son relaciones parte-todo, se implementan casi de manera idéntica, y la diferencia entre ellas es principalmente semántica. En una composición, generalmente agregamos nuestras partes a la composición usando variables miembro normales (o punteros donde la clase de composición maneja el proceso de asignación y desasignación).

En una agregación, también agregamos partes como variables miembro. Sin embargo, estas variables miembro suelen ser referencias o punteros que se utilizan para apuntar a objetos que se han creado fuera del alcance de la clase. **En consecuencia, una agregación generalmente toma los objetos a los que va a apuntar como parámetros de constructor, o comienza vacía y los subobjetos se agregan más tarde a través de funciones de acceso u operadores.** 

## Ejemplo 

Profesor y departamento. En este ejemplo, vamos a hacer un par de simplificaciones: primero, el departamento solo tendrá un maestro. Segundo, el maestro no sabrá de qué departamento es parte.

En este caso, el maestro se crea independientemente del departamento y luego se pasa al constructor del departamento. Cuando se destruye el departamento, se destruye el puntero m_teacher, pero el maestro en sí no se elimina, por lo que todavía existe hasta que se destruya de forma independiente más adelante en main ().

## Resumiendo composición y agregación

### Composiciones

- Normalmente usa variables miembro normales

- Puede usar miembros de puntero si la clase maneja la asignación de objetos / desasignación en sí

- Responsable de la creación / destrucción de piezas.

### Agregaciones:

- Por lo general, use miembros punteros o de referencia que apuntan o hacen referencia a objetos que viven fuera del alcance de la clase agregada
- No nos hacemos responsables de crear / destruir piezas