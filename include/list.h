/*
** EPITECH PROJECT, 2022
** liste chainée
** File description:
** list
*/

#include <stdlib.h>

#ifndef LIST_H_
    #define LIST_H_

typedef struct value_s {
    char *first;
    char *second;
    char *third;
    char *fourth;
} value_t;

typedef struct list_node_s {
    value_t *value;
    struct list_node_s *next;
    struct list_node_s *prev;
} list_node_t;

typedef struct list_s {
    list_node_t *head;
    list_node_t *tail;
    unsigned int size;
} list_t;

list_t *list_create(void);
unsigned int list_add(list_t *list, value_t *value);
void *list_get(list_t *list, unsigned int index);
list_node_t *list_get_node(list_t *list, unsigned int index);
void list_remove(list_t *list, unsigned int index);


#endif /* !LIST_H_ */
