#include <stdlib.h>
#include "queue.h"
struct BinaryTree{
    Node* root; 
};
typedef struct BinaryTree BinaryTree;
/*Aloca memória para nova árvore*/
BinaryTree* newTree();
/*Adiciona nó na árvore*/
void addNode(Node* parent, Node* n);
