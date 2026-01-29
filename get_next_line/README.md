# get_next_line

*Este proyecto ha sido creado como parte del currículo de 42 por <anbravo->*.

## Descripción

El objetivo de este proyecto es programar una función que devuelvauna línea leída de un file descriptor.

`get_next_line` es una herramienta esencial que permite leer contenido de archivos o de la entrada estándar de manera eficiente, línea por línea. El reto principal consiste en gestionar correctamente la memoria dinámica y utilizar **variables estáticas** para preservar el exedente de lectura entre llamadas consecutivas a la función.

## Características principales

* Lectura línea a línea de un archivo o del `stdin`.
* Gestión dinámica de memoria para evitar fugas (**leaks**).
* Uso de un `BUFFER_SIZE`ajustable mediante flags de compilación.
* Manejo eficiente del "restante" de lectura mediante una variable estática.

## Estructura del Proyecto

```
get_next_line/
├── get_next_line.c		# Lógica principal de la función
├── get_next_line_utils.c	# Funciones auxiliares (strlen, strjoin, etc.)
├── get_next_line.h		# Header con prototipos y macros.
└── README.md			# Este archivo.
```

## Instrucciones

### Compilación

Puedes compilar la función junto con tu código utilizando el flag  -D BUFFER_SIZE=n para definir el tamaño de lectura:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl
```

###
