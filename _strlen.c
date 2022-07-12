#include "main.h"

//strlen similar function
//
int _strlen(char *s)

{   int i;

    for(i=0; s[i] != '\0'; i++)
    ;

    return (i);
 }


