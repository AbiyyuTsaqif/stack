#include "stack.h"

void createstack(Stack &S){
    top(S) = 0;
}

bool isfull(Stack S){
    return top(S) == 8;
}

bool isEmpty(Stack S){
    return top(S) == 0;
}

void push(Stack &S, infotype P){
    if (isfull(S) == false){
        top(S)++;
        info(S)[top(S)] = P;
    }else {
        cout << "Stack Penuh" << endl;
    }
}

void pop(Stack &S, infotype P){
    if(isEmpty(S) == true){
        cout << "Stack Kosong" << endl;
    }else{
        P = info(S)[top(S)];
        top(S)--;
    }
}

void printstack(Stack S){
    int i = top(S);
    while (i > 0){
        cout << (info(S)[i]);
        i--;
    }
}

void hapusData(Stack &S){
    infotype P;
    while(isEmpty(S) == false){
        cout << info(S)[top(S)] << endl;
        pop(S, P);
    }
}
