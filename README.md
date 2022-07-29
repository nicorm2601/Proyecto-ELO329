# Calculadora de Lanzamiento de Proyectiles

***

## Reseña y Finalidad del Programa

El programa al cual este README hace referencia, es el proyecto final del curso ELO329 o Diseño y Programación Orientado a Objetos, este es un programa escrito en el lenguaje de programación C++. 
La finalidad del programa es poder calcular distintos datos relacionados con el lanzamiento de proyectiles tales como:

- Altura Máxima.
- Tiempo Total.
- Tiempo para Altura Máxima.
- Alcance del Proyectil.

***

## Lanzamiento de Proyectiles

El lanzamiento de proyectil es un tipo de movimiento realizado por un cuerpo ya sea en dos dimensiones o sobre un plano. Este tipo de movimiento es ampliamente estudiado en el campo de la física ya que es un movimiento que se encuentra cotidianamente en nuestras vidas y ejemplos de este hay muchos algunos de estos son: 

- Lanzamiento de un balón de fútbol.
- Lanzamiento de una piedra o algún objeto similar.
- El chorro de agua de una manguera.

Debido a que este tipo de movimiento es bastante común en la vida cotidiana hemos decidido crear un programa que sea capaz de calcular de manera rápida, fácil y efectiva ciertos datos que se desprenden del movimiento antes mencionado.

***

## Programación Orientada a Objetos

Como se mencionó anteriormente para la realización del proyecto se ocupó el lenguaje de programación C++, esta elección se debe a que este lenguaje soporta tanto la programación con paradigma procedural como con el paradigma de orientación a objetos, y para nuestro proyecto ambos paradigmas son útiles, sin embrago el más utilizado fue el de orientación a objetos o POO.
El paradigma de orientación a objetos fue utilizado para modelar el lanzamiento de proyectiles de forma completa, teniendo métodos tales como set_Altura o set_Masa y teniendo atributos como masa, altura o velocidad inicial.

***

## Condiciones de Compilación y Ejecución

Debido a que el programa está escrito en el lenguaje de C++, este debe ser compilado antes de ser ejecutado, el compilador que se debe usar es g++.
La recomendación es compilar y ejecutar el programa en algún sistema Linux, esto debido a que la compilación y ejecución de este programa es mucho más sencilla y directa en Linux que en otros sistemas operativos como Windows.

***

## Instrucciones de Compilación y Ejecución

Como se mencionó anteriormente, previo a ejecutar el programa es necesario realizar una compilación de este, esta compilación se realiza de la siguiente manera: 

1) Abrir una terminal de Linux.
2) Ir al directorio en donde se encuentra el código fuente.
3) Una vez dentro del directorio donde se encuentra el código fuente, ejecutar el siguiente comando: 

```
$ g++ Proyectil.cpp -o PROYECTIL -Wall
```

Una vez realizado el proceso anterior se creará un archivo binario llamado PROYECTIL el cual es el programa en sí, el cual se ejecuta de la siguiente manera en la terminal:

```
$ ./PROYECTIL
```

Una vez ejecutado lo anterior se imprimirán unos mensajes por pantalla y se podrán ingresar los datos necesarios para realizar todos los cálculos.

*** 

## Información de los Creadores del Programa

1) Giovanni Camilo, giovanni.camilo@usm.cl
2) Cristobal Díaz, cristobal.diazvi@usm.cl
3) Benjamín Espinoza, benjamin.espinozap@usm.cl
4) Nicolás Robles, nicolas.roblesm@usm.cl
