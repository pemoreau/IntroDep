#include <stdio.h>

#include "arraylist.h"

int main() {
    int *list = create_list();
    print_list(list);
    printf("len = %d\n", len(list));

    list = append(list, 1);
    print_list(list);
    list = append(list, 2);
    print_list(list);
    list = insert(list, 3);
    print_list(list);

    for (int i = 0; i < len(list); i++) {
        printf("get(%d) = %d\n", i, get(list, i));
    }

    print_list(range(0, 10));
    print_list(range(5, 10));

    print_list(slice(range(0, 10), 3, 7));
}
