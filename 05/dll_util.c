#include "dll.h"
#include <stdlib.h>
#include <memory.h>

int remove_data_from_dll_by_data_ptr(dll_t *dll, void *data)
{
    if (!dll || !data)
        return -1;

    dll_node_t *dll_node = dll->head;
    while (dll_node)
    {
        if (dll_node->data == data)
        {
            if (dll_node->left)
                dll_node->left->right = dll_node->right;
            else
                dll->head = dll_node->right;

            if (dll_node->right)
                dll_node->right->left = dll_node->left;

            free(dll_node);
            return 0;
        }
        dll_node = dll_node->right;
    }
    return -1;
}

int is_dll_empty(dll_t *dll)
{
    if (!dll)
        return -1;

    if (!dll->head)
        return 0;
    else
        return -1;
}

void drain_dll(dll_t *dll)
{
    if (!dll)
        return;

    dll_node_t *dll_node = dll->head;
    while (dll_node)
    {
        dll_node_t *dll_node_to_free = dll_node;
        dll_node = dll_node->right;
        free(dll_node_to_free);
    }
    dll->head = NULL;
}
