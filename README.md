# PRINTF Progect

This project aims at rebuilding the printf library with basic functionality. I tried to implement as much of the original as possible.

Basics, requested from subject:

* 1) parsing for flags (#, 0, -, + and space), field_width, precision, lengtn_modifier (hh, h, l and ll) and for conversion specifier.
* 2) displaying UTF-8 characters. (%c and %s).
* 3) computing unsigned numbers in base 8(%o), 10 (%u) and 16 (%x).
* 4) displaying signed numbers (%d) and (%i).
* 5) displaying decimal floating point (%f).
* 6) displaying pointer address (%p).

## Installation && Test

* 1) Create main.c
```c
int x;

x = 42;
ft_printf("value: %-10.5d\n", x);

// value: "00042     "
```
* 2) When compiling, make sure to link the `libftprintf.a` library.

```
>$ make
>$ gcc main.c libftprintf.a 
```

* 3) Then just run and enjoy your program!

```
>$ ./a.out
```

## Contact && Contribute

To contact or helping me to (fix bugs || improve) ft_printf, feel free to e-mail me at vsmolii@student.42.us.org
