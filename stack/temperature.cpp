#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <set>
#include <stack>

using namespace std;

class Solution {       
    public:
        vector<int> dailyTemperatures(vector<int> &temperatures) {
            vector<int> data(temperatures.size(), 0);
            stack<int> s;
            
            s.push(0);
            for (int i = 1; i < temperatures.size(); i++) {
                while (!s.empty()) {
                    bool flag = false;
                    if (temperatures[s.top()] < temperatures[i]) {
                        data[s.top()] = i - (s.top());
                        s.pop();
                        flag = true;       
                    } 

                    if (!flag || s.size() == 0) {
                        s.push(i);
                        break;
                    }  

                }
            }

            return data;
        }
};

int main() {
    Solution solution;
    vector<int> arr1 = { 73, 74, 75, 71, 69, 72, 76, 73 };
    vector<int> arr2 = { 30, 40, 50, 60 };
    vector<int> arr3 = { 30, 60, 90 };
    vector<int> arr4 = { 55, 38, 53, 81, 61, 93, 97, 32, 43, 78 };

    for (auto &num : solution.dailyTemperatures(arr1)) {
        printf("%d ", num);
    }
    printf("\n");

    for (auto &num : solution.dailyTemperatures(arr2)) {
        printf("%d ", num);
    }
    printf("\n");

    for (auto &num : solution.dailyTemperatures(arr3)) {
        printf("%d ", num);
    }

    for (auto &num : solution.dailyTemperatures(arr4)) {
        printf("%d ", num);
    }
    printf("\n");

    return 0;
}