# Laboratorio 2 -Calcular Prestamo-

El siguiente ejercicio es para desarrollar los conocimientos en:

- Clase y Objetos
- Casting de objetos
- Archivos de implementación y encabezado
- UML
- Condicionales
- Ciclos
- Manejo de Strings

## Diagrama UML

![](https://www.lucidchart.com/publicSegments/view/e2c3fff8-e903-4a6b-8863-73ac584692d3/image.png)

## Objetivo

Un sistema que a partir de un monto de un préstamo pueda imprimir un reporte de los balances a través del tiempo.

Los valores de entrada son 

- Monto del préstamo

  - Ejemplo 30.000

- Tiempo

  - El valor de entrada podría ser de la forma **#A (año)** o **#M (més)**, ejemplo:

    ```
    1A = 1 año
    2A = 2 años
    10M = 10 Meses
    2M = 2 Meses
    ```

- Tasa anualizada

  - El valor de entrada podría ser de la forma **#%**, ejemplo:

    ```
    2% = 2 porciento
    3.5 = 3.5 porciento
    ```

## Procedimientos

1. El método `obtenerPorcentaje(std::string porcentajeTXT)` 
   - Entra 8.40% y sale 0.084
2. El método `calcularTiempoEnMeses(std::string tiempoTXT)`
   - Se utiliza solo para convertir años a meses, ejemplo:
     - Entra 1A y sale 12 
     - Entra 2A y sale 24
3. El método `calcularInteresMensual(float balance, float tasaAnual)`
   - Se utiliza para calcular el interes mensual a partir de una tasa anual, ejemplo:
     - Entra 30.000, 0.084 y sale 210
4. El método `reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT)` permite retornar en pantalla el resultado del cálculo de valores.
   - Entra 1A, 8.40% y sale el reporte en pantalla

### Ejemplo de datos en pantalla

```
Calcular préstamo: 
Tasa [8.40%], Mes [1], balance inicial [30000.000000], interes [210.000000], balance nuevo [30210.000000] 
Tasa [8.40%], Mes [2], balance inicial [30210.000000], interes [211.469986], balance nuevo [30421.470703] 
Tasa [8.40%], Mes [3], balance inicial [30421.470703], interes [212.950287], balance nuevo [30634.421875] 
Tasa [8.40%], Mes [4], balance inicial [30634.421875], interes [214.440948], balance nuevo [30848.863281] 
Tasa [8.40%], Mes [5], balance inicial [30848.863281], interes [215.942032], balance nuevo [31064.804688] 
Tasa [8.40%], Mes [6], balance inicial [31064.804688], interes [217.453629], balance nuevo [31282.257812] 
Tasa [8.40%], Mes [7], balance inicial [31282.257812], interes [218.975800], balance nuevo [31501.234375] 
Tasa [8.40%], Mes [8], balance inicial [31501.234375], interes [220.508636], balance nuevo [31721.742188] 
Tasa [8.40%], Mes [9], balance inicial [31721.742188], interes [222.052185], balance nuevo [31943.794922] 
Tasa [8.40%], Mes [10], balance inicial [31943.794922], interes [223.606552], balance nuevo [32167.402344] 
Tasa [8.40%], Mes [11], balance inicial [32167.402344], interes [225.171814], balance nuevo [32392.574219] 
Tasa [8.40%], Mes [12], balance inicial [32392.574219], interes [226.748016], balance nuevo [32619.322266] 
```

------

[Página de Inicio](https://github.com/mikeguzman/EIF201-Progra-I)