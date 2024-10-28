//byteSize.c
//Este programa imprime por consola  los
//tamaños en bytes de cada tipo dato primitivo en el lenguaje C
//tambien imprime el rango de representacion de cantidades cada tipo de dato con o sin signo
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("\nBienvenido a la calculadora de tamaño de tipos de datos primitivo en C \n\n");
    //Datos primitivos
    printf("Tamaño de un caracter char %ld byte\n", sizeof(char));
    printf("Tamaño de un entero paqueño short int %ld byte\n", sizeof(short));
    printf("Tamaño de un entero grande long %ld byte\n", sizeof(long int));
    printf("Tamaño de un entero int %ld byte\n", sizeof(int));
    printf("Tamaño de un flotante float %ld byte\n", sizeof(float));
    printf("Tamaño de un doble double %ld byte\n", sizeof(double));
    printf("Tamaño de un doble largo long double %ld byte\n", sizeof(long double));
    
    printf("\n\nRangos de tipos de datos en C:\n\n");

    // Tipo char
    printf("char:\n");
    printf("  Con signo: %d a %d\n", CHAR_MIN, CHAR_MAX);
    printf("  Sin signo: 0 a %u\n", UCHAR_MAX);

    // Tipo short
    printf("short:\n");
    printf("  Con signo: %d a %d\n", SHRT_MIN, SHRT_MAX);
    printf("  Sin signo: 0 a %u\n", USHRT_MAX);

    // Tipo int
    printf("int:\n");
    printf("  Con signo: %d a %d\n", INT_MIN, INT_MAX);
    printf("  Sin signo: 0 a %u\n", UINT_MAX);

    // Tipo long
    printf("long:\n");
    printf("  Con signo: %ld a %ld\n", LONG_MIN, LONG_MAX);
    printf("  Sin signo: 0 a %lu\n", ULONG_MAX);


    // Tipos de punto flotante
    printf("float:\n");
    printf("  Con signo: %.3e a %.3e\n", FLT_MIN, FLT_MAX);
    printf("  Sin signo:  0 a %.3e \n", FLT_MAX);

    printf("double:\n");
    printf("  Con signo: %.3e a %.3e\n", DBL_MIN, DBL_MAX);
    printf("  Sin signo:  0 a %.3e \n", DBL_MAX);

    printf("long double:\n");
    printf("  Con signo: %.3Le a %.3Le\n", LDBL_MIN, LDBL_MAX);
    printf("  Sin signo:  0 a %.3Le \n\n\n", LDBL_MAX);
}
