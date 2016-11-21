#ifndef _STACK
#define _STACK
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 30
	#ifndef _BOOLEAN 
		#define _BOOLEAN
		typedef enum {FALSE,TRUE} BOOLEAN;
	#endif
	typedef struct 
	{
		void * arr[N];
		int top;
	}stack,*stackPtr;
    void initStack(stackPtr s);
	BOOLEAN isEmptyStack(stackPtr s);
	BOOLEAN isFull(stackPtr s);
	void * peek(stackPtr s);
	void pushStack(stackPtr s,void * data);
	void * popStack(stackPtr s);
#endif
