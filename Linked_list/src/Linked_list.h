#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int val;
	struct node* next;
};
void add_node_start(struct node** head, int val);
void printList(struct node* head);
void form_list();
#endif