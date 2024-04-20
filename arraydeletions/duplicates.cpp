#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>

using namespace std;


class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int count = 0;
            int i = 0, j = 1;
            while (j < nums.size()) {
                if (nums[i] == nums[j]) {
                    count++;
                    j++;
                } else if (nums[i] != nums[j]) {
                    int temp = nums[j];
                    nums[i + 1] = temp;
                    j++; i++;
                }
            }

            printf("count %d\n", count);

            return nums.size() - count;
        }
};

int main(int argc, char * argv[]) {
    vector<int> nums {0,0,1,1,1,2,2,3,3,4};
    Solution solution;

    int k = solution.removeDuplicates(nums);
    printf("new size = %d\n", k);

    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");

	return 0;
}
