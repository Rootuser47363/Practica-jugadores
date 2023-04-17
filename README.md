# Programa en C para almacenar datos de jugadores de baloncesto

Este es un programa en lenguaje C que permite almacenar los datos de cinco jugadores de baloncesto y realizar tres acciones sobre ellos:

1. Mostrar una lista de los jugadores con sus nombres, edades y alturas.
2. Buscar un jugador por su nombre e imprimir su edad y altura.
3. Encontrar el jugador más alto de la lista e imprimir su nombre y altura.

El programa utiliza estructuras para almacenar los datos de cada jugador y un menú con opciones para el usuario. El código está organizado en funciones, lo que hace que sea fácil de leer y modificar.

## Instrucciones de uso

1. Descarga el archivo `practicajugadores.c` y guárdalo en tu equipo.
2. Compila el archivo utilizando un compilador de C, como `gcc`.
3. Ejecuta el archivo compilado en tu consola de comandos.
4. Sigue las instrucciones del menú para realizar las acciones deseadas.

## Funciones del programa

### `nombres()`

Esta función pide al usuario que ingrese el nombre, la edad y la altura de cada jugador, y los almacena en la estructura `jugador`.

### `menu()`

Esta función muestra un menú al usuario con tres opciones:

1. Lista de jugadores: muestra una lista de los nombres, edades y alturas de los jugadores almacenados.
2. Buscar jugador: permite al usuario buscar un jugador por su nombre e imprimir su edad y altura.
3. Jugador más alto: encuentra el jugador más alto de la lista e imprime su nombre y altura.

### `lista()`

Esta función recorre la estructura `jugador` y muestra una lista de los nombres, edades y alturas de los jugadores almacenados.

### `buscar()`

Esta función pide al usuario que ingrese el nombre de un jugador y busca en la estructura `jugador` si existe un jugador con ese nombre. Si se encuentra un jugador con ese nombre, se imprime su edad y altura. Si no se encuentra ningún jugador con ese nombre, se imprime un mensaje de error.

### `alto()`

Esta función recorre la estructura `jugador` y encuentra el jugador más alto de la lista. Luego, imprime su nombre y altura.

## Contribución

Si deseas contribuir a este proyecto, puedes hacer un fork del repositorio y enviar un pull request con tus cambios.

## Licencia

Este programa está bajo la licencia MIT. Puedes utilizar, modificar y distribuir el código de este programa bajo los términos de esta licencia.
