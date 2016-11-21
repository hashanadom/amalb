#include "stack.h"
	void initStack(sPtr s)
	{
		s->offset=-1;
	}
	int isEmptyStack(sPtr s)
	{
		return s->offset==-1
	}
	int isFull(sPtr s)
	{
		return s->offset==N-1
	}
	void * peek(stackPtr s)
	{
		return *(s->arr + s->offset);
	}
	void pushStack(sPtr s,void * data)
	{
		*(s->arr + ++(s->offset))=data;
	}
	void * popStack(sPtr s)
	{
		return *(s->arr+ (s->offset)--);
	}

