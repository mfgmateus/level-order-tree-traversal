#include <stdlib.h>
#include "queue.h"
Queue* newQueue(){
    Queue * q = malloc(sizeof(Queue));
    q->start = NULL;
    q->end = NULL;
}
void addQueueNode(Queue* q, Node* n){
    if(n != NULL){
        if(q->start == NULL){
            q->start = n;
        }else{
            q->end->next = n;
        }
        q->end = n;
    }
}
