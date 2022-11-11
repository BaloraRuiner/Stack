#include <iostream>
#include "Array.h"
#include "OneList.h"
#include "Deque.h"
#include "TwoList.h"

using namespace std;

int main()
{
    //OneList
    cout << "OneList" << endl;
    OneLinkedList list;
    list.onelistPush(15);
    list.onelistPush(20);
    list.onelistPush(25);
    list.onelistPush(30);
    list.onelistPush(35);
    list.onelistPush(40);
    list.onelistPush(45);
    cout << list.is_empty() << endl;
    list.onelistPop();
    cout << list.onelistCount() << endl;
    cout << list.onelistPeek() << endl;
    while (!list.is_empty())
    {
        cout << list.onelistPop() << endl;
    }
    list.onelistClear();
    cout << list.is_empty() << endl;

    //Array//
    cout << "Array" << endl;
    Stack S;
    push(S, 15);
    push(S, 20);
    push(S, 25);
    push(S, 30);
    push(S, 35);
    push(S, 40);
    push(S, 45);
    cout << isEmpty(S) << endl;
    pop(S);
    cout << count(S) << endl;
    cout << peek(S) << endl;
    while (!isEmpty(S))
    {
        cout << pop(S) << endl;
    }
    clear(S);
    cout << isEmpty(S) << endl;

    //Deque
    cout << "Deque" << endl;
    Deque D;
    D.pushHead(15);
    D.pushHead(25);
    D.pushHead(35);
    D.pushHead(45);
    //D.popHead();
    //D.popTail();
    while (!D.isEmpty())
    {
        cout << D.popHead() << endl;
    }

    //TwoList
    cout << "TwoList" << endl;
    TwoLinkedList TwoList;
    TwoList.twoListPushTail(15);
    TwoList.twoListPushTail(25);
    TwoList.twoListPushTail(35);
    TwoList.twoListPushTail(45);
    cout << TwoList.isEmpty() << endl;
    //TwoList.twoListPopHead();
    while (!TwoList.isEmpty())
    {
        cout << TwoList.twoListPopHead() << endl;
    }
    TwoList.twoListClear();
    cout << TwoList.isEmpty() << endl;
}
