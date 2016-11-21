#include <stdlib.h>
#include "node.h"
struct Queue{
    Node* start;
    Node* end;
};
typedef struct Queue Queue;
/* Aloca memória para uma nova fila */
Queue* newQueue();
/* Adiciona elemento na fila*/
void addQueueNode(Queue* q, Node* n);
