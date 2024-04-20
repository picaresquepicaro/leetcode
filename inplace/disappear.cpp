#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <algorithm>
#include <set>

using namespace std;


class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int> &nums) {
            int n = nums.size();
            set<int> container;
            vector<int> response;

            for (int& num : nums) {
                if (container.count(num)) {
                    continue;
                } else {
                    container.insert(num);
                }
            }

            int missingNum = 1;
            while (missingNum <= n) {
                if (!container.count(missingNum)) {
                    response.push_back(missingNum);
                }
                missingNum++;
            }

            return response;
    }
};


int main(int argc, char * argv[]) {
    vector<int> arr1 = { 4, 3, 2, 7, 8, 2, 3, 1 };
    vector<int> arr2 = { 1, 1 };

    Solution solution;
    int i;
    vector<int> response1 = solution.findDisappearedNumbers(arr1);
    for (i = 0; i < response1.size(); i++) {
        printf("%d ", response1[i]);
    }

    printf("\n");

    vector<int> response2 = solution.findDisappearedNumbers(arr2);
    for (i = 0; i < response2.size(); i++) {
        printf("%d ", response2[i]);
    }

    printf("\n");

	return 0;
}
