#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>

using namespace std;


class Solution {
    public:
        bool validMountainArray(vector<int> &arr) {
            int N = arr.size();
            int i = 0;

            while (i + 1 < N && arr[i] < arr[i + 1])
                i++;

            if (i == 0 || i == N - 1)
                return false;

            while (i + 1 < N && arr[i] > arr[i + 1])
                i++;

            return i == N - 1;
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
