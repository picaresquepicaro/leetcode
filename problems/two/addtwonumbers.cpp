#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ListNode {
    int data;
    struct ListNode * next;

    /*
    ListNode(): data(0), next(nullptr) {}
    ListNode(int data=0): data(val), next(nullptr) {}
    ListNode(int data, Node * tempNext): data(val), next(tempNext) {}
    */
};


void push(struct ListNode ** head, int data) {
    struct ListNode * newNode = new ListNode;

    newNode->data = data;
    newNode->next = (*head);

    (*head) = newNode;

    return;
}


void append(struct ListNode ** ptr, int data) {
    struct ListNode * newNode = new ListNode;

    struct ListNode * last = *ptr;
    newNode->data = data;
    newNode->next = NULL;

    if (*ptr == NULL) {
        *ptr = newNode;
    } else {
        while (last->next != NULL) {
            last = last->next;
        }
        
        last->next = newNode;
    }

    return;
}


void display(struct ListNode * ptr) {
    while (ptr != NULL) {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }

    cout << endl;
}


class Solution {
    public:
        ListNode * addTwoNumbers(ListNode * l1, ListNode * l2) {
            struct ListNode * result = new ListNode;

            int a, b;
            while (l1 != NULL) {
                l1 = l1->next;
                a++;
            }

            while (l2 != NULL) {
                l2 = l2->next;
                b++;
            }


            int carry = 0, total, remainder;
            if (a <= b) {
                for (int i = 0; i < a; i++) {
                    total = l1->data + l2->data + carry;

                    if (total >= 10) {
                        carry = 1;
                    } else {
                        carry = 0;
                    }

                    remainder = total % 10;

                    push(&result, remainder);
                }

                if (a != b) {
                    for (int j = a; j < b; j++) {
                        push(&result, l2->data);
                    }
                }
            } else if (b < a) {
                for (int i = 0; i < b; i++) {
                    total = l1->data + l2->data + carry;

                    if (total >= 10) {
                        carry = 1;
                    }

                    remainder = total % 10;

                    push(&result, remainder);
                }

                for (int j = b; j < a; j++) {
                    push(&result, l1->data);
                }
            }

            /*
            string num1 = "";
            while (l1 != NULL) {
                num1 += to_string(l1->data);
                l1 = l1->next;
            }

            // reverse
            int a = num1.length();
            string revnum1 = "";
            for (int i = a - 1; i >= 0; i--) {
                revnum1 += num1[i];
            }

            string num2 = "";
            while (l2 != NULL) {
                num2 += to_string(l2->data);
                l2 = l2->next;
            }

            int b = num2.length();
            string revnum2 = "";
            for (int i = b - 1; i >= 0; i--) {
                revnum2 += num2[i];
            }

            cout << revnum1 << ' ' << revnum2 << endl;

            long long int total = strtoull(revnum1) + strtoull(revnum2);
            string totalStr = to_string(total);
            int N = totalStr.length();

            cout << totalStr << endl;

            for (int i = N - 1; i >= 0; i--) {
                push(&result, totalStr[i] - '0');
                cout << i << ' ' << (totalStr[i] - '0') << endl;
            }
            */
        
            return result;
        }

};



int main(int argc, char * argv[]) {
    struct ListNode * l1 = NULL;
    append(&l1, 1);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 0);
    append(&l1, 1);

    struct ListNode * l2 = NULL;
    append(&l2, 5);
    append(&l2, 6);
    append(&l2, 4);

    //display(l1);
    //display(l2);

    Solution solution;

    struct ListNode * answer = solution.addTwoNumbers(l1, l2);

    display(answer);

	return 0;
}
