#include "stack.h"
#include <iostream>

using namespace std;

int main()
{
    Stack S;
    createstack(S);
    infotype P;

    push(S, 'P');
    push(S, 'A');
    push(S, 'I');
    push(S, 'N');
    push(S, 'P');
    push(S, 'A');
    push(S, 'I');
    printstack(S);

    cout << endl;

    hapusData(S);

    return 0;
}
