#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <algorithm>
#include <set>

using namespace std;

class Queue {
    private:
        int front, rear;
        vector<int> items;

    public:
        Queue(int k) {
            items.resize(k);
            front = -1, rear = -1;
        }

        bool isFull() {
            if (front == 0 && rear == items.size()) {
                return true;
            }

            if (front == rear + 1) {
                return true;
            }

            return false;
        }

        bool isEmpty() {
            if (front == -1) {
                return true;
            } else {
                return false;
            }
        }

        bool enQueue(int element) {
            if (isFull()) {
                printf("full\n");
                return false;
            } else {
                if (front == -1)
                    front = 0;

                rear = (rear + 1) % items.size();
                items[rear] = element;

                printf("inserted %d\n", element);
                return true;
            }
        }

        bool deQueue() {
            int element;
            if (isEmpty()) {
                return false;
            } else {
                element = items[front];
                if (front == rear) {
                    front = -1, rear = -1;
                } else {
                    front = (front + 1) % items.size();
                }

                return true;
            }
        }

        int getRear() {
            if (rear == -1) {
                return -1;
            }

            return items[rear];
        }
};


int main(int argc, char * argv[]) {
    Queue q = {4};

    printf("%d\n", q.enQueue(3));
    printf("%d\n", q.enQueue(1));
    printf("%d\n", q.enQueue(2));
    printf("%d\n", q.enQueue(4));
    printf("%d\n", q.getRear());
    printf("%d\n", q.isFull());
    printf("%d\n", q.deQueue());
    printf("%d\n", q.enQueue(4));
    printf("%d\n", q.getRear());

	return 0;
}
