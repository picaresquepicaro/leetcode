#include <iostream>
#include <queue>

using namespace std;

class MyStack {
    private:
        queue<int> q1;

    public:
        MyStack() {
            printf("MyStack.\n");
        }

        void push(int x) {
            q1.push(x);
            for (int i = 0; i < q1.size() - 1; i++) {
                q1.push(q1.front());
                q1.pop();
            }
        }

        int pop() {
            int val = q1.front();
            q1.pop();
            
            return val;
        }

        int top() {
            return q1.front();
        }

        bool empty() {
            return q1.empty();
        }
};


int main(int argc, char * argv[]) {
    MyStack * s = new MyStack();
    s->push(1);
    s->push(2);
    printf("%d\n", s->top());
    printf("%d\n", s->pop());
    printf("%d\n", s->empty());

	return 0;
}
