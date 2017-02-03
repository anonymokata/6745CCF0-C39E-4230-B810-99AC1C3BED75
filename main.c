#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "string_util.h"



int main()
{
    char *test;
    test = str_replace("DCVIIII","VIIII","IX");
    printf("\n%s",test);
    return 0;
}
