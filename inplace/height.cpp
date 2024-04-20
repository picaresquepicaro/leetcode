#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <algorithm>

using namespace std;


class Solution {
    public:
        int heightChecker(vector<int> &heights) {
            int n = heights.size();
            vector<int> sorted(n);
            int i = 0;

            for (i = 0; i < n; i++) 
                sorted[i] = heights[i];

            for ( i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (sorted[i] > sorted[j]) {
                        int temp = sorted[i];
                        sorted[i] = sorted[j];
                        sorted[j] = temp;
                    }
                }
            }

            int count = 0;
            for (i = 0; i < n; i++) {
                if (sorted[i] != heights[i]) {
                    count++;
                }
            }

            

            return count;
        }
};


int main(int argc, char * argv[]) {
    vector<int> arr1 = { 1, 1, 4, 2, 1, 3 };
    vector<int> arr2 = { 5, 1, 2, 3, 4 };
    vector<int> arr3 = { 1, 2, 3, 4, 5 };

    Solution solution;
    int response1 = solution.heightChecker(arr1);
    printf("%d\n", response1);

    int response2 = solution.heightChecker(arr2);
    printf("%d\n", response2);

    int response3 = solution.heightChecker(arr3);
    printf("%d\n", response3);

    printf("\n");

	return 0;
}
