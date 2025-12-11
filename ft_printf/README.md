# ft_printf

*Este proyecto ha sido creado como parte del currículo de 42 por <anbravo->*.

## Descripción

El objetivo de este proyecto es programar una librería que contenga la función `ft_printf`, una replica dela función original printf de la biblioteca estandar de C (stdio.h).

La función principal es capaz de procesar una cadena de formato y un numero variable de arghumentos para imprimir diversos tipos de datos en la salia estándar. El reto principla consiste en gestionar correctamente los formatos de conversión (%c, %s, %p, %d, %i, %u, %x, %X y %%) y devolver el número total de caracteres impresos.

## Conversiones Implementadas

La función soporta las siguientes conversiones:

| Formato | Descripción |
|---------|-------------|
| `%c` | Imprime un solo carácter |
| `%s` | Imprime una cadena de caracteres |
| `%p` | Imprime un puntero en formato hexadecimal |
| `%d` | Imprime un número decimal con signo |
| `%i` | Imprime un número entero con signo |
| `%u` | Imprime un número decimal sin signo |
| `%x` | Imprime un número hexadecimal en minúsculas |
| `%X` | Imprime un número hexadecimal en mayúsculas |
| `%%` | Imprime un símbolo de porcentaje |

## Estructura del Proyecto

```
ft_printf/
├── ft_printf.c        # Función principal
├── ft_printf.h        # Header con prototipos
├── ft_percent.c       # Manejo de %%
├── ft_putchar.c       # Impresión de caracteres
├── ft_puthex.c        # Impresión de hexadecimales
├── ft_putint.c        # Impresión de enteros
├── ft_putpointer.c    # Impresión de punteros
├── ft_putstr.c        # Impresión de strings
├── ft_putunsigned.c   # Impresión de unsigned
├── Makefile           # Compilación del proyecto
└── README.md          # Este archivo
```
### Compilar la librería

```bash
make
```

Este comando genera `libftprintf.a`.

### Limpiar todo (incluida la librería)

```bash
make fclean
```

## Valor de Retorno

La función retorna el número total de caracteres impresos (sin contar el carácter nulo del final de string).

## Norma

El proyecto está desarrollado siguiendo la Norminette de 42 School:
- 25 líneas máximo por función
- 5 funciones máximo por archivo
- Sin leaks de memoria
- Compilación con flags `-Wall -Wextra -Werror`
