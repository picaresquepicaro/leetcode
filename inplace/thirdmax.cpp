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
        int thirdMax(vector<int> &nums) {
            set<int> sorted;
        
            for (int& num : nums) {
                if (sorted.count(num)) {
                    continue;
            }
            
            if (sorted.size() == 3) {
                if (*sorted.begin() < num) {
                    sorted.erase(sorted.begin());
                    sorted.insert(num);
                }
                
            } else {
                sorted.insert(num);
            }
        }
        
        if (sorted.size() == 3) {
            return *sorted.begin();
        }
        
        return *sorted.rbegin();
    }
};


int main(int argc, char * argv[]) {
    vector<int> arr1 = { 3, 2, 1 };
    vector<int> arr2 = { 1, 2 };
    vector<int> arr3 = { 2, 2, 3, 1, 5, 0 };

    Solution solution;
    int response1 = solution.thirdMax(arr1);
    printf("%d\n", response1);

    int response2 = solution.thirdMax(arr2);
    printf("%d\n", response2);

    int response3 = solution.thirdMax(arr3);
    printf("%d\n", response3);

    printf("\n");

	return 0;
}
