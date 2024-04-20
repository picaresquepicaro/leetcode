#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>

using namespace std;


class Solution {
    public:
        vector<int> runningsum(vector<int> &nums) {
            for (unsigned int i = 1; i < nums.size(); i++) {
                nums[i] += nums[i - 1];
            }

            return nums;
        }
};

void print(list<vector<int>> &listOfVectors) {
    for (auto vect : listOfVectors) {
        vector<int> current = vect;

        cout << "[ ";

        for (auto element : current) {
            cout << element << ' ';
        }

        cout << "]";
        cout << "\n";
    }
}

void printVector(vector<int> &vec) {
    cout << "[ ";
    for (auto element : vec) {
        cout << element << " ";
    }

    cout << "]" << endl;
}

int main(int argc, char * argv[]) {
    vector<int> vector1{ 1, 2, 3, 4 };
    vector<int> vector2{ 1, 1, 1, 1, 1 };
    list<vector<int>> listOfVectors{ vector1, vector2 };

    print(listOfVectors);

    Solution solution;
    
    for (auto vect : listOfVectors) {
        vector<int> res = solution.runningsum(vect);
        printVector(res);
    }


	return 0;
}
