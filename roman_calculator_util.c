#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "roman_calculator_util.h"
#include "string_util.h"


char roman_numbers[] = {'I','V','X','L','C','D','M'};

char* COMPACT[] = { "IX", "IV", "XC", "XL", "CM", "CD"};
char* UNCOMPACT[] = { "VIIII", "IIII", "LXXXX", "XXXX", "DCCCC", "CCCC" };

char* GROUP[] = { "V", "X", "L", "C", "D", "M" };
char* UNGROUP[] = { "IIIII", "VV", "XXXXX", "LL", "CCCCC", "DD" };



char* expand(char* number) {
        for(int i=0; i <=5; i++) {
            number = str_replace(number,COMPACT[i],UNCOMPACT[i]);
        }
        return number;
    }
char* group(char* number) {
        for(int i=0; i <=5; i++) {
            number = str_replace(number,UNGROUP[i],GROUP[i]);
        }
        return number;
    }
char* ungroup(char* number) {
        int check=1;
        while(1)
        {
        for(int i=0; i <=5; i++) {
            number = str_replace(number,GROUP[i],UNGROUP[i]);

                }
        if (strchr(number,'M')||strchr(number,'D')||strchr(number,'C')||strchr(number,'L')||strchr(number,'X')||strchr(number,'V'))
            check=0;
        else
            check=1;
        if (check == 1)
            break;
        }
        return number;
    }

char* shorten(char* number) {
        for(int i=0; i <=5; i++) {
            number = str_replace(number,UNCOMPACT[i],COMPACT[i]);
        }
        return number;
    }

 char* sort(const char* unsorted)
 {
        char *data;
        int size = strlen(unsorted);
        data=(char*)malloc(size*sizeof(char*));
        strcpy(data,unsorted);
        //printf("\nIn function check :%s",data);
        for (int i=0; i < size; i++) {
            for (int j=i+1; j <size; j++) {
                    //printf("\n%c: %c",data[i],data[j]);
                if ( getposition(roman_numbers,data[i]) < getposition(roman_numbers,data[j])) {
                    //printf("\n%s: %s",data[i],data[j]);
                    char tmp = data[i];
                    data[i] = data[j];
                    data[j] = tmp;
                }
            }
        }
        return (char *)data;
    }

