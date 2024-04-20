#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <stack>

using namespace std;


class Solution {
    public:
        bool isValid(string s) {
            stack<char> stk;
            char x;
            
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                    stk.push(s[i]);
                    continue;
                }

                if (stk.empty()) {
                    return false;
                }

                switch(s[i]) {
                    case ')':
                        x = stk.top();
                        stk.pop();
                        if (x == '{' || x == '[') {
                            return false;
                        }
                        break;
                    case '}':
                        x = stk.top();
                        stk.pop();
                        if (x == '(' || x == '[') {
                            return false;
                        }
                        break;
                    case ']':
                        x = stk.top();
                        stk.pop();
                        if (x == '(' || x == '{') {
                            return false;
                        }
                        break;
                }
            }

            return (stk.empty());
        }
        
};


int main(int argc, char * argv[]) {
    Solution solution;
    string items[] = { "()", "()[]{}", "(]" };

    int length = sizeof(items)/sizeof(items[0]);
    for (int i = 0; i < length; i++) {
        if(solution.isValid(items[i])) {
            printf("Valid\n");
        } else {
            printf("Invalid\n");
        }
    }

	return 0;
}
