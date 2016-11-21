#ifndef _STACK
#define _STACK
#include <stdio.h>
#define N 40
typedef struct{
	void * arr[N];
	int offset;
	}stack,*sPtr;
    void initStack(sPtr s);
	int isEmptyS(sPtr s);
	int isFullS(sPtr s);
	void * peek(sPtr s);
	void pushS(sPtr s,void * data);
	void * popS(sPtr s);
#endif
