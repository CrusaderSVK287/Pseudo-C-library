#include "../pseudo_c.h"
#include <stdio.h>

int main()
{
        IF(1) THEN(puts("if");)

        IF(0) THEN(puts("if");)

        IF(1) THEN(puts("if");)
        ELSE(puts("else");)

        IF(0) THEN(puts("if");)
        ELSE(puts("else");)
}
