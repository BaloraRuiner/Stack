#pragma once

using namespace std;

struct Stack {
    int scale = 0;
    int* S = new int[scale];
};

bool isEmpty(Stack& St) {
    if (St.scale == 0)
        return true;
    else
        return false;
}

void push(Stack& St, int data) {
    St.scale++;
    St.S[St.scale] = data;
}

int pop(Stack& St) {
    if (isEmpty(St)) return -1;
    St.scale--;
    return St.S[St.scale + 1];
}

int peek(Stack& St)
{
    if (isEmpty(St)) return -1;
    return St.S[St.scale];
}

int count(Stack& St)
{
    if (isEmpty(St)) return -1;
    return St.scale;
}

void clear(Stack& St)
{
    while (!isEmpty(St))
    {
        St.scale--;
    }
}