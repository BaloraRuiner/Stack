#pragma once

using namespace std;

struct Noted {
    int data;
    Noted* next;
    Noted(int _data) : data(_data), next(nullptr) {}
};

struct OneLinkedList {
    Noted* head, * tail;
    OneLinkedList() : head(nullptr), tail(nullptr) { }

    bool is_empty() {
        return head == nullptr;
    }

    void onelistPush(int _data)
    {
        Noted* temp = new Noted(_data);
        if (is_empty())
        {
            head = temp;
            tail = temp;
            return;
        }
        temp->next = head;
        head = temp;
    }

    int onelistPop()
    {
        Noted* temp = head;
        head = temp->next;
        return temp->data;
        delete temp;
    }

    void onelistClear()
    {
        while (head)
        {
            onelistPop();
        }
    }

    int onelistPeek()
    {
        Noted* temp = head;
        return temp->data;
    }

    int onelistCount()
    {
        int count = 0;
        Noted* temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
};