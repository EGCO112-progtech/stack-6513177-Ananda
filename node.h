//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//

#ifndef linkedlist_h
#define linkedlist_h

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;

// void push(NodePtr *top, int data)
// {
//     NodePtr new_node = (NodePtr) malloc(sizeof(Node));

//     if(new_node)
//     {
//         new_node->data = data;
//         new_node->nextPtr = *top;
//         *top = new_node;
//     }

//     // new_node->data = data;
//     // new_node->nextPtr = NULL;

//     // if (top == NULL) *top = new_node;
//     // else
//     // {
//     //     (*tmp)->nextPtr = (*top)->nextPtr;
//     //     (*top)->nextPtr = new_node;
//     //     new_node->nextPtr = (*tmp)->nextPtr;
//     //     free(tmp);
//     // }
// }

// int pop(NodePtr *top)
// {
//     NodePtr t = *top;
//     if (t)
//     {
//         int value = t->data;
//         *top = t->nextPtr;
//         free(t);
//         return value;
//     }
//     printf("Empty stack");
//     return 0;
// }

#endif
