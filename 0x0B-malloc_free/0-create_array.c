#include  "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }

    char *array
    array  = malloc((size + 1) * sizeof(char));
    if (array == NULL)
    {
        return NULL; 
    }

    for (unsigned int i = 0; i < size; i++)
    {
        array[i] = c;
    }
    array[size] = '\0';

    return array;
}
