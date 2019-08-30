# Asociación simple

Para calificar como asociación, un objeto y otro objeto deben tener la siguiente relación:

> - El objeto asociado (miembro) no está relacionado con el objeto (clase)
> - El objeto asociado (miembro) puede pertenecer a más de un objeto (clase) a la vez
> - El objeto asociado (miembro) no tiene su existencia administrada por el objeto (clase)
> - El objeto asociado (miembro) puede o no saber acerca de la existencia del objeto (clase)

A diferencia de una composición o agregación, donde la parte es parte del objeto completo, en una asociación, **el objeto asociado no está relacionado con el objeto**. Al igual que una agregación, el objeto asociado puede pertenecer a varios objetos simultáneamente, y esos objetos no lo administran. Sin embargo, a diferencia de una agregación, donde la relación siempre es unidireccional, **en una asociación, la relación puede ser unidireccional o bidireccional (donde los dos objetos se conocen entre sí).**

Debido a que las asociaciones son un tipo amplio de relación, pueden implementarse de muchas maneras diferentes. Sin embargo, la mayoría de las veces, las asociaciones se implementan mediante punteros, donde el objeto apunta al objeto asociado.

## Ejemplo

Tenemos una relación bidireccional médico / paciente, ya que tiene sentido que los médicos sepan quiénes son sus pacientes y viceversa.

La relación entre médicos y pacientes es un gran ejemplo de asociación. El médico claramente tiene una relación con sus pacientes, pero conceptualmente no es una relación parcial / total (composición de objetos). Un médico puede ver a muchos pacientes en un día, y un paciente puede ver a muchos médicos (tal vez quieran una segunda opinión o estén visitando diferentes tipos de médicos). Ninguno de los períodos de vida del objeto está vinculado al otro.

En general, se deben evitar las asociaciones bidireccionales y hacerlo unidireccional, ya que agregan complejidad y tienden a ser más complejas y fáciles para cometer errores.

------

[Relaciones de Objetos](../../docs/relaciones-objeto.md)

[Página de Inicio](https://github.com/mikeguzman/EIF201-Progra-I)

