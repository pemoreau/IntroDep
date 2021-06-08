#ifndef ARRAYLIST_H
#define ARRAYLIST_H

int *create_list();
int len(int *list);
int get(int *list, int index);
void print_list(int *list);
int *append(int *list, int element);
int *insert(int *list, int element);
int *range(int lower, int upper);
int *slice(int *list, int lower, int upper);

#endif
