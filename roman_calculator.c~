#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "roman_calculator_util.h"
#include "string_util.h"


char* roman_addition(char* a, char* b)
{
    char *sum;
    sum = (char*) malloc((strlen(a)+strlen(b))*sizeof(char*));
    strcpy(sum,expand(a));
    strcat(sum,expand(b));
    //printf("\nAddition: %s",sum);
    //sum = expand(a) + expand(b);
    sum = sort(sum);
    //printf("\nSort: %s",sum);
    sum = group(sum);
    //printf("\nGroup: %s",sum);
    sum = shorten(sum);
   //printf("\nShorten: %s",sum);

    return (char *)sum;

}
char* roman_subtraction(char* a, char* b)
{
    char *sub;
    int number=0,i;


    a= ungroup(a);
    b = ungroup(b);
    //printf("\n%s,\n%s",a,b);
    if (strlen(a)>strlen(b))
        number = strlen(a)-strlen(b);
    else if (strlen(b)>strlen(a))
        number = strlen(b)-strlen(a);
    else
        number=0;
    sub = (char*) malloc(number*sizeof(char*));
    sub[0]='\0';
    //printf("\nnumber = %d",number);
    for (i=0;i<number;i++)
        strcat(sub,"I");
    sub[number]='\0';

    //printf("\nSubtraction: %s",sub);
    //sum = expand(a) + expand(b);
    sub = sort(sub);
    //printf("\nSort: %s",sub);
    sub = group(sub);
    //printf("\nGroup: %s",sub);
    sub = shorten(sub);
    //printf("\nShorten: %s",sub);

    return (char *)sub;

}



