# Calculadora de Lanzamiento de Proyectiles

***

## Reseña y Finalidad del Programa

El programa al cual este README hace referencia, es el proyecto final del curso ELO329 o Diseño y Programación Orientado a Objetos, este es un programa escrito en el lenguaje de programación C++, además este cuenta con una interfaz gráfica realizada con Qt Creator. 
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
El paradigma de orientación a objetos fue utilizado para modelar el lanzamiento de proyectiles de forma completa, teniendo métodos tales como set_Altura o set_Masa y teniendo atributos como masa, altura o velocidad inicial. Además de lo anterior cabe destacar que para la creación de la GUI es necesario adoptar el paradigma de POO ya que facilita mucho el trabajo en programas con Qt Creator.

***

## Condiciones de Compilación y Ejecución

Debido a que el programa está escrito en el lenguaje de C++, este debe ser compilado antes de ser ejecutado, el compilador que se debe usar es g++.
La recomendación es compilar y ejecutar el programa en algún sistema Linux, esto debido a que la compilación y ejecución de este programa es mucho más sencilla y directa en Linux que en otros sistemas operativos como Windows.
Otra condición necesaria para la ejecución del programa en su totalidad es el tener instalado el programa Qt Creator ya que con este es posible desplegar el programa con su interfaz gráfica, además Qt Creator tiene que estar en la versión 5 ya que si no ocurren errores con ciertas funciones y ventanas de la GUI del programa.

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

## Interfaz Grafica

El programa en una versión más avanzada cuenta con interfaz gráfica para poder hacer más agradable la experiencia del usuario, esto al hacer más amigable el ambiente de uso del programa y mostrar recursos visuales los cuales ayudan a los usuarios.

Para hacer uso del programa con interfaz gráfica es necesario seguir los siguientes pasos: 

1) Descargar todos los archivos subidos al GitHub de este proyecto.
2) Descomprimir la carpeta .zip.
3) Abrir el archivo "Proyecto_ELO329.pro".
4) Una vez dentro de Qt Creator y con el proyecto abierto correr el proyecto con Run.

Una vez realizado lo anterior se desplegarán las ventanas del programa de la calculadora de lanzamientos de proyectiles.

**Para la correcta ejecución del programa con GUI es necesario tener la versión 5 de Qt Creator**

*** 

## Información de los Creadores del Programa

1) Giovanni Camilo, giovanni.camilo@usm.cl
2) Cristobal Díaz, cristobal.diazvi@usm.cl
3) Benjamín Espinoza, benjamin.espinozap@usm.cl
4) Nicolás Robles, nicolas.roblesm@usm.cl
