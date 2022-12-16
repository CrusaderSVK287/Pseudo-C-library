#include "../pseudo_c.h"
#include <stdio.h>

#define print_a_and_b printf("a: %d   b: %d\n", a, b);

int main()
{
        int a = 3;
        int b = 5;

        print_a_and_b

        SWAP(a,b)
        print_a_and_b

        SET(a) TO(2)
        print_a_and_b

        INCREASE(a) BY(10)
        print_a_and_b
        DECREASE(a) BY(4)
        print_a_and_b
        MULTIPLY(a) BY(3)
        print_a_and_b
        DIVIDE(a) BY(2)
        print_a_and_b
}
