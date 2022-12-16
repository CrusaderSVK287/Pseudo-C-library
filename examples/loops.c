#include "../pseudo_c.h"
#include <stdio.h>

int main()
{
        int i;
        FOR(SET(i) TO(0), STEP i++, UNTIL i < 10) DO
                printf("%d ", i);
        END

        printf("\n");

        int j = 0;
        WHILE(j < 5) DO
                printf("%d ", j);
                j++;
        END

        printf("\n");
}
