#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "qtype.h"


typedef struct queueWhole
{
    struct queueNode * head;
    struct queueNode * tail;
}* queue;


struct queueNode
{
    struct queueNode * next;
    qtype storedData;
};

queue createQueue();
bool checkEmptyQueue (queue qn);
bool checkFullQueue (queue qn);
bool deleteQueue (queue qn);
bool enqueueQueue (queue qn, qtype data);
bool dequeueQueue (queue qn, qtype *data);
int countElementsQueue (queue qn);
bool valueFirstQueue (queue qn, qtype *data);



#endif // QUEUE_H_INCLUDED
