#include "../pseudo_c.h"
#include <stdio.h>

int main()
{
        for (int i = 0; i < 4; i++)
        {
                WITH(i) SWITCH
                        IN_CASE_OF(0) EXECUTE(puts("zero");)
                        IN_CASE_OF(1) EXECUTE(puts("one");)
                END_SWITCH
        }
}
