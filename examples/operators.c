#include "../pseudo_c.h"
#include <stdio.h>

int main()
{
        IF(5 IS 5) THEN(
                puts("5 equals 5");
        )

        IF(5 IS_NOT 2) THEN(
                puts("5 is not 2");
        )

        IF(5 IS 5 AND 5 IS_NOT 2) THEN(
                puts("5 is 5 and not 2");
        )

        IF (5 IS 2) THEN(
                puts("wrong");
        ) ELSE (
                puts("correct");
        )

        int a = 5;
        IF (INCREMENT a == 6) THEN(
                puts("a is 6");
        )
}
