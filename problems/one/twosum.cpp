#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public: 
        vector<int> twoSum(vector<int>& nums, int target) {
            for (int i = 0; i < nums.size(); i++) {
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[i] + nums[j] == target) {
                        return {i, j};
                    }
                }
            }

            return {};
        }
};

int main(int argc, char * argv[]) {
    vector<int> numbers1{2, 7, 11, 15};
    vector<int> numbers2{3, 2, 4};
    vector<int> numbers3{3, 3};
    Solution solution;

    vector<int> result1 = solution.twoSum(numbers1, 9);
    for (int i = 0; i < result1.size(); i++) {
        if (i == result1.size() - 1) {
            cout << result1.at(i) << "\n";
        } else {
            cout << result1.at(i) << ", ";
        }
    }

    vector<int> result2 = solution.twoSum(numbers2, 6);
    for (int i = 0; i < result2.size(); i++) {
        cout << result2.at(i);
    }

    vector<int> result3 = solution.twoSum(numbers3, 6);
    for (int i = 0; i < result3.size(); i++) {
        cout << result3.at(i);
    }

	return 0;
}
