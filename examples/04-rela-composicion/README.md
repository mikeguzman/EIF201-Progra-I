# Composición

En la vida real, los objetos complejos a menudo se construyen a partir de objetos más pequeños y simples.

La composición de objetos modela una relación "tiene-a" entre dos objetos. Una transmisión de automóvil "tiene-a". Su computadora tiene una CPU. Usted tiene un corazón. El objeto complejo a veces se llama el todo, o el padre. El objeto más simple a menudo se llama parte, hijo o componente.

Hay dos subtipos básicos de composición de objetos: **composición y agregación.**

> Para calificar como composición, un objeto y una parte deben tener la siguiente relación:
>
> - La parte (miembro) es parte del objeto (clase)
> - La parte (miembro) solo puede pertenecer a un objeto (clase) a la vez
> - La parte (miembro) tiene su existencia administrada por el objeto (clase)
> - La parte (miembro) no sabe acerca de la existencia del objeto (clase)

En una relación de composición, el objeto es responsable de la existencia de las partes, esto significa que la parte se crea cuando se crea el objeto y se destruye cuando se destruye el objeto, debido a esto, la composición a veces se llama una **"relación de muerte"**

La parte no sabe acerca de la existencia del todo. Su corazón opera felizmente sin darse cuenta de que es parte de una estructura más grande. Llamamos a esto una **relación unidireccional**, porque el cuerpo sabe sobre el corazón, pero no al revés.

