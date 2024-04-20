#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <algorithm>

using namespace std;


class Solution {
    public:
        vector<int> sortArrayByParity(vector<int> &nums) {
            int n = nums.size();
            vector<int> sortedArray(n);

            int even = 0;
            int odd = n - 1;
            for (int i = 0; i < n; i++) {
                if (nums[i] % 2 == 0) {
                    sortedArray[even] = nums[i]; 
                    even++;
                } else {
                    sortedArray[odd] = nums[i];
                    odd--;
                }
            }

            return sortedArray;
        }
};


int main(int argc, char * argv[]) {
    vector<int> arr1 = { 3, 1, 2, 4 };
    vector<int> arr2 = { 0 };

    Solution solution;
    vector<int> response1 = solution.sortArrayByParity(arr1);
    for (int i = 0; i < response1.size(); i++) 
        printf("%d ", response1[i]);

    printf("\n");

    vector<int> response2 = solution.sortArrayByParity(arr2);
    for (int i = 0; i < response2.size(); i++)
        printf("%d\n", response2[i]);

    printf("\n");

	return 0;
}
