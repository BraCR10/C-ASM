/*********************************************************
 * A simple program to illustrate how mixed-mode programs 
 * are written in C and assembly languages. The main C 
 * program calls the assembly language procedure test1.
 *********************************************************/
#include <stdio.h>

int main(void)
{
        int    x = 80, y = 15;
        int    value;
        extern int test1 (int, int, int);

        value = test1(x, y, 5);
        printf("Running test1(%d, %d, 5)\n", x, y);
        printf("Result = %d\n\n\n", value);
	
        return 0;
}
