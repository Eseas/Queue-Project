#include "qtype.h"
#include "queue.h"


bool emptyQueue (queue qn)
{
	return (qn->head == NULL);
}



bool fullQueue (queue qn)
{
	return (qn->head != NULL);
}



queue createQueue ()
{
	queue qn =  (queue) malloc ( sizeof(queue) );

	qn -> head = NULL;
	qn -> tail = NULL;

	return qn;
}



bool deleteQueue (queue qn)
{
	struct queueNode * toFree;

	while (qn->head != NULL)
	{
		toFree = qn->head;
		qn->head = qn->head->next;

		free(toFree);
	}

	free(qn);

	return 1;
}




bool enqueueQueue (queue qn, qtype data)
{
	struct queueNode *node;
	if (!(node = ( struct queueNode * ) malloc ( sizeof ( struct queueNode ) ) ) ) return 0;

	if (qn->head != NULL) qn->tail->next = node;		/* Assigning an address of this node to last used tail */
	/* If there are elements */

	node->storedData = data;
	node->next = NULL; 	/* It'll be assigned an address if more than one "pushBack" function is applied. */

	qn->tail = node;

	if (qn->head == NULL) qn->head = qn->tail;

	return 1;
}


bool dequeueQueue (queue qn, qtype* data)
{

	if (0 == countElementsQueue(qn) )
	{
		return 0;
	}

	*data = qn->head->storedData;

	struct queueNode * toFree = qn->head;

	qn->head = qn->head->next;

	free(toFree);


	return 1;
}



int countElementsQueue (queue qn)
{
	int count = 0;
	struct queueNode *node;

	node = qn -> head;
	while (node != NULL)
	{
		node = node -> next;
		count++;
	}
	return count;
}



bool valueFirstQueue (queue dn, qtype* data)
{
	if ( 0 == countElementsQueue(dn) )
		return 0;

	*data = dn->head->storedData;

	return 1;
}


