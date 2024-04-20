#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <unordered_map>

using namespace std;


class Solution {
    public:
        bool checkIfExist(vector<int>& arr) {
            unordered_map<int, int> umap;
            int n = arr.size();

            int count = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] == 0 && count == 0) {
                    count++;
                    continue;
                } else if (arr[i] == 0 && count >= 1) {
                    return true;
                }
                
                umap.insert(make_pair(arr[i], i));

                int half = arr[i] % 2 == 0 ? arr[i] / 2 : 0;
                int twice = arr[i] * 2;
                //printf("%d == %d & %d\n", arr[i], arr[i] / 2, arr[i] * 2); 
                
                if ((umap.find(half) != umap.end() && half != 0) || umap.find(twice) != umap.end()) {
                    return true;
                }
            }

            return false;
        }
};

int main(int argc, char * argv[]) {
    vector<int> nums1 {10,2,5,3};
    vector<int> nums2 {3,1,7,11};
    vector<int> nums3 {7,1,14,11};
    vector<int> nums4 {-2,0,10,-19,4,6,-8};
    vector<int> nums5 {0,0};
    Solution solution;

    printf("%s\n", solution.checkIfExist(nums1) ? "True" : "False");
    printf("%s\n", solution.checkIfExist(nums2) ? "True" : "False");
    printf("%s\n", solution.checkIfExist(nums3) ? "True" : "False");
    printf("%s\n", solution.checkIfExist(nums4) ? "True" : "False");
    printf("%s\n", solution.checkIfExist(nums5) ? "True" : "False");

	return 0;
}
