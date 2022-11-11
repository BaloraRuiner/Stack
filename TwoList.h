#pragma once

using namespace std;

struct Node {
	int data;
	Node* next;
	Node* prev;
	Node(int _data) : data(_data), next(NULL), prev(NULL){}
};

struct TwoLinkedList {
	Node* head;
	Node* tail;

	TwoLinkedList() : head(NULL), tail(NULL) {}

	bool isEmpty() {
		return head == NULL;
	}

	void twoListPushTail(int _data) {
		Node* temp = new Node(_data);
		temp->data = _data;
		if (isEmpty())
		{
			head = temp;
			tail = temp;
			return;
		}
		temp->prev = tail;
		tail->next = temp;
		tail = temp;
	}

	int twoListPopHead() {
		Node* temp = head;
		head = temp->next;
		return temp->data;
		delete temp;
	}

	int twoListPeekHead() {
		Node* temp = head;
		return temp->data;
	}

	int twoListPeekTail() {
		Node* temp = tail;
		return temp->data;
	}

	void twoListClear() {
		while (head)
		{
			Node* temp = head;
			head = temp->next;
			delete temp;
		}
	}

	int twoListCount() {
		int count = 0;
		Node* temp = head;
		while (temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		return count;
	}
};