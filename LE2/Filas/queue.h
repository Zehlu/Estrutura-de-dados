#include <stdlib.h>
#include <stdbool.h>

//	Queue ADT Type Defintions 
	typedef struct node 
	  {
	   void*        dataPtr;
	   struct node* next;
	  } QUEUE_NODE;
	typedef struct
	  {
	   QUEUE_NODE* front; 
	   QUEUE_NODE* rear; 
	   int         count; 
	  } QUEUE;
	
//	Prototype Declarations 
	QUEUE* createQueue  (void);

    bool  enqueue    (QUEUE* queue, void*  itemPtr);
	bool  dequeue    (QUEUE* queue, void** itemPtr);
	bool  queueFront (QUEUE* queue, void** itemPtr);
	bool  queueRear  (QUEUE* queue, void** itemPtr);
	bool  emptyQueue (QUEUE* queue);
	bool  fullQueue  (QUEUE* queue); 
	int   queueCount (QUEUE* queue);
	QUEUE* destroyQueue (QUEUE* queue);
	
//	End of Queue ADT Definitions