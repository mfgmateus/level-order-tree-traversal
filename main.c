#include <stdio.h>
#include "tree.h"
void print(BinaryTree* bt){ 
    Queue q;
    q.start = NULL;
    q.end = NULL;
    addQueueNode(&q, bt->root);
    int sp = 0;
    while(q.start != NULL){
        Node* n = q.start;
        Queue aux;
        aux.start = NULL;
        aux.end = NULL;
        while(n != NULL){
            if(!sp) sp++;
            else printf(" ");
            printf("%d",n->val);
            addQueueNode(&aux,n->left);
            addQueueNode(&aux,n->right);
            Node* temp = n;
            n = n->next;
              free(temp);
        }
        q = aux;
    }
    printf("\n");
}
int main(){
    int nCases;
    int i = 1;
    scanf("%d",&nCases);
    while(i <= nCases){
        int n;
        scanf("%d",&n);
        Node* root = NULL;
        while(n > 0){
            int val;
            scanf("%d",&val); 
            if(root == NULL)
              root = newNode(val);
            else
              addNode(root, newNode(val));
            n--; 
        }
        printf("Case %d:\n",i);
        BinaryTree* tree = newTree();
        tree->root = root;
        print(tree);
        printf("\n");
        i++;
    }
    return 0;
}
