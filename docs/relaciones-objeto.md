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

    - 

------

[Página de Inicio](https://github.com/mikeguzman/EIF201-Progra-I)

