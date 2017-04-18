#include "qtype.h"
#include "queue.h"


int main()
{
	queue q1, q2;
	int userVar;
	int anotherUserVar;

	q1 = createQueue();
	q2 = createQueue();

	enqueueQueue(q1, 99999);
	dequeueQueue(q1, &userVar);
	dequeueQueue(q1, &userVar);
	printf("valueFirstQueue:%d\n",  userVar);
/*



	dequeueQueue(q1, &userVar);

	enqueueQueue(q1, 5);
	enqueueQueue(q1, 7);



	valueFirstQueue(q1, &userVar);

	printf("valueFirstQueue:%d\n",  userVar);

	dequeueQueue(q1, &userVar);
	valueFirstQueue(q1, &anotherUserVar);

	printf("valueFirstQueue:%d\n",  anotherUserVar);
*/
	return 0;
}
