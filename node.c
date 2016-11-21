#include "node.h"
#include <stdlib.h>
Node* newNode(int val){
    Node* n = malloc(sizeof(Node));
    n->right = NULL;
    n->left = NULL;
    n->val = val;
    return n;
}
