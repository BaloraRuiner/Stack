#pragma once

using namespace std;

struct Deque {
	int D[1000];
	int head = 500;
	int tail = 500;

	void pushHead(int data) {
		head--;
		D[head] = data;
	}

	void pushTail(int data) {
		D[tail] = data;
		tail++;
	}

	int popHead() {
		if (head != tail)
		{
			head++;
			return D[head - 1];
		}
	}

	int popTail() {
		if (head != tail)
		{
			tail--;
			return D[tail];
		}
	}

	bool isEmpty() {
		return head == tail;
	}
};