#include <stdio.h>

#include "module.h"

int sum(int t[], int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += t[i];
    }
    return res;
}

int mylen(char s[]) {
    int res = 0;
    while (s[res]) {
        res++;
    }
    return res;
}

int main() {
    printf("addone(5) = %d\n", addone(5));
    printf("addcst(5) = %d\n", addcst(5));

    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("sum = %d\n", sum(tab, 10));

    char s[] = "abc";
    printf("mylen = %d\n", mylen(s));
}
