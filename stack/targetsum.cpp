#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
    private:
        int dfs(vector<int> &n, int tgt, int sum, int index) {
            if (index == n.size() && sum != tgt) {
                return 0;
            } else if (index == n.size() && sum == tgt) {
                return 1;
            }

            int left = dfs(n, tgt, sum + n[index], index + 1);
            int right = dfs(n, tgt, sum - n[index], index + 1);
            
            return left + right;
        }

    public:
        int findTargetSumWays(vector<int> &nums, int target) {
            return dfs(nums, target, 0, 0);
        }
};


int main(int argc, char * argv[]) {
    vector<int> arr1 { 1, 1, 1, 1, 1 };
    vector<int> arr2 { 1 };

    Solution solution;
    printf("%d\n", solution.findTargetSumWays(arr1, 3));
    printf("%d\n", solution.findTargetSumWays(arr2, 1));

    vector<int> arr3 { 1, 2, 3, 4, 5 };
    printf("%d\n", solution.findTargetSumWays(arr3, 13));

	return 0;
}
