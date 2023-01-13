#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>

using namespace std;

#define top(S) (S).top
#define info(P) (P).info


typedef char infotype;

struct Stack {
    infotype info[8];
    int top;
} ;

void createstack(Stack &S);
bool isfull(Stack S);
bool isEmpty(Stack S);
void push(Stack &S, infotype P);
void pop(Stack &S, infotype P);
void printstack(Stack S);
void hapusData(Stack &S);


#endif // STACK_H_INCLUDED
