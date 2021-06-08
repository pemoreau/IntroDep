#include <stdio.h>
#include <stdlib.h>

int *create_list() {
    int *res = (int *)malloc(1 * sizeof(int));
    res[0] = 0;
    return res;
}

int len(int *list) { return list[0]; }

int get(int *list, int index) {
    if (index >= 0 && index < len(list)) {
        return list[index + 1];
    }
    printf("Index out of bounds: %d\n", index);
    exit(EXIT_FAILURE);
}

void print_list(int *list) {
    int n = len(list);
    printf("[");
    if (n > 0) {
        for (int i = 0; i < n - 1; i++) {
            printf("%d, ", list[i + 1]);
        }
        printf("%d", list[n]);
    }
    printf("]\n");
}

int *append(int *list, int element) {
    int n = len(list);
    int *res = realloc(list, (1 + n + 1) * sizeof(int));
    res[0] = n + 1;
    res[n + 1] = element;
    return res;
}

int *insert(int *list, int element) {
    int *res = append(list, 0);
    int n = len(list);
    for (int i = n; i > 1; i--) {
        res[i] = res[i - 1];
    }
    res[1] = element;
    return res;
}

int *range(int lower, int upper) {
    int n = upper - lower;
    if (n > 0) {
        int *res = (int *)malloc((1 + n) * sizeof(int));
        res[0] = n;
        for (int i = 0; i < n; i++) {
            res[i + 1] = lower + i;
        }
        return res;
    }
    printf("range error: upper=%d should be greater than lower=%d\n", upper,
           lower);
    exit(EXIT_FAILURE);
}

int *slice(int *list, int lower, int upper) {
    int n = upper - lower;
    if (n > 0) {
        int *res = (int *)malloc((1 + n) * sizeof(int));
        res[0] = n;
        for (int i = 0; i < n; i++) {
            res[i + 1] = get(list, lower + i);
        }
        return res;
    }
    printf("slice error: upper=%d should be greater than lower=%d\n", upper,
           lower);
    exit(EXIT_FAILURE);
}
