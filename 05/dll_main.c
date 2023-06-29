#include "dll.h"
#include <memory.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    dll_t *dll = get_new_dll();
    int *data = calloc(1, sizeof(int));
    *data = 10;
    add_data_to_dll(dll, data);
    printf("dll is empty: %d\n", is_dll_empty(dll));
    drain_dll(dll);
    printf("dll is empty: %d\n", is_dll_empty(dll));
    return 0;
}
