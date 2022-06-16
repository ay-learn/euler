#include<criterion/criterion.h>
#include <criterion/new/assert.h>
#include<stdio.h>
#include<string.h>

#define MAX 100
#define MAXT 101 // max col for table t[MAX][MAXT]

void setup(void)
{
    printf("++++++++++++++++++\n\n");
}

void teardown(void)
{
    printf("\n++++++++++++++++++\n\n");
}

Test(init, matric, .init = setup, .fini = teardown){
    double a[MAX][MAX], b[MAX], x[MAX], y[MAX], u[MAX][MAX], l[MAX][MAX];
    a[1][1] =  8; a[1][2] = -4; a[1][3] =   3; a[1][4] =   7; b[1] =  12;
    a[2][1] =  4; a[2][2] =  2; a[2][3] =  -6; a[2][4] =   4; b[2] =   1;
    a[3][1] = 16; a[3][2] =  6; a[3][3] =  -2; a[3][4] = -15; b[3] = -19;
    a[4][1] =  6; a[4][2] = 10; a[4][3] = -15; a[4][4] =  10; b[4] =   1;
    cr_assert(a[1][1]==9);
    cr_assert(eq(str, "hello", "hello"));
}
