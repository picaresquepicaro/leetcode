#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>

using namespace std;


class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int count = 0;
            printf("%d\n", count);
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == val) {
                    count++;
                    for (int j = i + 1; j < nums.size(); j++) {
                        if (nums[j] != val) {
                            nums[i] = nums[j];
                            nums[j] = val;
                            count--;
                            break;
                        }
                    }
                }
            }

            printf("count %d\n", count);

            return nums.size() - count;
        }
};

int main(int argc, char * argv[]) {
    vector<int> nums {0,1,2,2,3,0,4,2};
    Solution solution;

    int k = solution.removeElement(nums, 2);
    printf("new size = %d\n", k);

    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");

	return 0;
}
