#include <stdlib.h>
#include "tree.h"
typedef struct BinaryTree BinaryTree;
BinaryTree* newTree(){
    BinaryTree* bt = malloc(sizeof(BinaryTree));
    bt->root = NULL;
    return bt;
}
void addNode(Node* parent, Node* n){
    if(n->val < parent->val){
      if(parent->left == NULL){
        parent->left = n;
      }else{
        addNode(parent->left, n);
      }
    }else{
      if(parent->right == NULL) {
        parent->right = n;
      }else{
        addNode(parent->right,n);
      }
    }
}
