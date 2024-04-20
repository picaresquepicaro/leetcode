#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
    private:
        stack<int> s1;
        stack<int> s2;
    public:
        MyQueue() {
            printf("MyQueue.\n");
        }

        void push(int x) {
            if (x != NULL)
                s1.push(x);
        }

        int pop() {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }

            int val = s2.top();
            s2.pop();

            while(!s2.empty()) {
                s1.push(s2.top());
                s2.pop();
            }

            return val;
        }

        int peek() {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }

            int val = s2.top();

            while(!s2.empty()) {
                s1.push(s2.top());
                s2.pop();
            }

            return val;
        }

        bool empty() {
            return s1.empty();
        }
};


int main(int argc, char * argv[]) {
    MyQueue * q = new MyQueue();
    q->push(1);
    q->push(2);
    printf("%d\n", q->peek());
    printf("%d\n", q->pop());
    printf("%d\n", q->empty());

	return 0;
}
