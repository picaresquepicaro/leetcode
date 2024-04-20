#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>

using namespace std;


class Solution {
    public:
        vector<int> replaceElements(vector<int> &arr) {
            int n = arr.size();

            if (n == 0)
                return arr;

            for (int i = 0; i < n - 1; i++) 
                arr[i] = arr[i + 1];

            arr[n - 1] = -1;

            int i = n - 2, currentMax = 0;
            while (i >= 0) {
                if (currentMax < arr[i]) {
                    currentMax = arr[i];
                }

                arr[i] = currentMax;

                i--;
            }

            return arr;
        }
};


int main(int argc, char * argv[]) {
    vector<int> arr1 = { 17, 18, 5, 4, 6, 1 };
    vector<int> arr2 = { 400 };

    Solution solution;
    solution.replaceElements(arr1);
    for (int i = 0; i < arr1.size(); i++) 
        printf("%d\n", arr1[i]);

    solution.replaceElements(arr2);
    for (int i = 0; i < arr2.size(); i++)
        printf("%d\n", arr2[i]);

	return 0;
}
