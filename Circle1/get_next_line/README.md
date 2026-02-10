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

### Main de prueba

Aquí tienes un ejemplo básico paraa verificar el funcionamiento:

```C
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    char    *line;
    int     fd;

    fd = open("test.txt", O_RDONLY);
    
    if (fd == -1)
    {
        printf("Error: No se pudo abrir el archivo test.txt\n");
        return (1);
    }
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }

    close(fd);
    return (0);
}
```

## Conceptos Clave Aprendidos

* **Variables EStáticas:** Uso de `static char *storade` para recordar el exceso de texto leído que pertenece a la siguiente línea.

* **File Descriptors:** Gestión de punteros de lectura en el sistema de archivos.

* **Memory Management:** Asegurar que cada `malloc` tenga su correspondiente `free`, especialmente al concatenar buffers y limpiar el excedente.

## Norma

El proyecto cumple estrictamente con la Norminette de 42 School:

* Máximo 25 líneas por función.

* Máximo 5 funciones por archivo.

* Sin fugas de memoria(comprobando con Valgrind/Leaks).

* Uso exclusivo de funciones autorizadas: `read`, `free`, `malloc`.
