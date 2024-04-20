#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>

using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int val=0) : data(val), next(nullptr) {}
    Node(int val, Node *tempNext) : data(val), next(tempNext) {}
};

class LinkedList{
    Node *head;
    public:
        LinkedList():head(nullptr) {}
        
        void insert(int val) {
            Node *newNode = new Node(val);

            if (head == nullptr) {
                head = newNode;
            } else {
                newNode->next = head;
                head = newNode;
            }
        }

        void display() {
            Node *temp = head;
            while(temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            } 

            cout << endl;
        }

        Node * getHead() {
            return head;
        }
};

class Solution {
    public:
        Node * middleNode(Node * head) {
            Node * middle = head;
            Node * end = head;

            while (end != NULL && end->next != NULL) {
                middle = middle->next;
                end = end->next->next;
            }

            return middle;
        }
};

int main(int argc, char * argv[]) {
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);

    list.display();
    
    Node * ptr = list.getHead();

    Solution solution;
    Node * answer = solution.middleNode(ptr);

    printf("%d\n", answer->data);

	return 0;
}
