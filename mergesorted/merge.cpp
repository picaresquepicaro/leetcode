#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <algorithm>

using namespace std;


class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            for (int j = 0, i = m; j < n; j++) {
                nums1.at(i) = nums2.at(j);
                i++;
            }
        }
};

int main(int argc, char * argv[]) {
    vector<int> num1{ 1, 2, 3, 0, 0, 0 };
    vector<int> num2{ 2, 5, 6 };
    Solution solution;
    solution.merge(num1, 3, num2, 3);

    for (int i = 0; i < num1.size(); i++) {
        printf("%d ", num1[i]);
    }

    printf("\n");

	return 0;
}
