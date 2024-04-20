#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <stack>
#include <string>
#include <algorithm>


using namespace std;


class Solution { 
    public:
        int evalRPN(vector<string> &tokens) {
            stack<int> s;

            for (const string &tk : tokens) {
                if (tk == "+" || tk == "-" || tk == "*" || tk == "/") {
                    int b = s.top();
                    s.pop();
                    int a = s.top();
                    s.pop();

                    if (tk == "+") {
                        s.push(a + b);
                    } else if (tk == "-") {
                        s.push(a - b);
                    } else if (tk == "*") {
                        s.push(a * b); 
                    } else {
                        s.push(a / b);
                    }
                } else {
                    s.push(stoi(tk));
                }
            }

            return s.top();
        }
};

int main() {
    Solution solution;
    vector<string> arr1 = { "2", "1", "+", "3", "*" };
    vector<string> arr2 = { "4", "13", "5", "/", "+" };
    vector<string> arr3 = { "10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+" };

    printf("%d\n", solution.evalRPN(arr1));
    printf("%d\n", solution.evalRPN(arr1));
    printf("%d\n", solution.evalRPN(arr3));

    return 0;
}