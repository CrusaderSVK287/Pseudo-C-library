#include "../pseudo_c.h"
#include <stdio.h>

PROCEDURE(foo, const char* text)
BEGIN
        puts(text);
END

int main()
{
        foo("Hello world!");
}
