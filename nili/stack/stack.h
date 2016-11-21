#ifndef _STACK
#define _STACK
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 40
	typedef struct 
	{
		void * arr[N];
		int offset;
	}stack,*sPtr;
    void initStack(sPtr s);
	int isEmptyStack(sPtr s);
	int isFull(sPtr s);
	void * peek(sPtr s);
	void pushStack(sPtr s,void * data);
	void * popStack(sPtr s);
#endif
