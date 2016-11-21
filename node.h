#include <stdio.h>
struct Node{
    int val;
    struct Node* right;
    struct Node* left;
    struct Node* next;
};
typedef struct Node Node;

/*Aloca memória para um nó*/
Node* newNode(int val);
