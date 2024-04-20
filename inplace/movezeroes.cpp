#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <algorithm>

using namespace std;


class Solution {
    public:
        void moveZeroes(vector<int> &nums) {
            int i = 0, j = 0;
            
            while (i < nums.size()) {
                if (nums[i] != 0) {
                    nums[j] = nums[i];
                    j++; i++;
                } else if (nums[i] == 0) {
                    i++;
                }
            }

            for ( ; j < nums.size(); j++) {
                nums[j] = 0;
            }
        }
};


int main(int argc, char * argv[]) {
    vector<int> arr1 = { 0, 1, 0, 3, 12 };
    vector<int> arr2 = { 0 };

    Solution solution;
    solution.moveZeroes(arr1);
    for (int i = 0; i < arr1.size(); i++) 
        printf("%d\n", arr1[i]);

    solution.moveZeroes(arr2);
    for (int i = 0; i < arr2.size(); i++)
        printf("%d\n", arr2[i]);

	return 0;
}
