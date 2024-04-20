#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>

using namespace std;


class Solution {
    public:
        bool validMountainArray(vector<int> &arr) {
            if (arr.size() < 2) {
                return false;
            }

            int peak = -1;
            for (int i = 0; i < arr.size() - 1; i++) {
                if (arr[i] > arr[i + 1] && i == 0) {
                    return false;
                } else if (arr[i] == arr[i + 1]) {
                    return false;
                } else if (arr[i] > arr[i + 1]) {
                    peak = i;
                    break;
                }

                if (i == arr.size() - 2) {
                    return false;
                }
            }

            for (int i = peak; i < arr.size() - 1; i++) {
                if (arr[i] <= arr[i + 1]) {
                    return false;
                } 
            }

            return true;
        }
};


int main(int argc, char * argv[]) {
    vector<int> arr1 = { 2, 1 };
    vector<int> arr2 = { 3, 5, 5 };
    vector<int> arr3 = { 0, 3, 2, 1 };

    Solution solution;
    printf("%d\n", solution.validMountainArray(arr1));
    printf("%d\n", solution.validMountainArray(arr2));
    printf("%d\n", solution.validMountainArray(arr3));

	return 0;
}
