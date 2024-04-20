#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>

using namespace std;


class Solution {
    public:
        int numberOfSteps(int num) {
            int steps = 0;

            while (num > 0) {
                if ((num & 1) == 0) {
                    num >>= 1;
                } else {
                    num--;
                }

                steps++;
            }

            return steps;
        }
};

int main(int argc, char * argv[]) {
    int numbers[3] = { 14, 8, 123 };
    Solution solution;

    for (int i = 0; i < int (sizeof(numbers)/sizeof(numbers[0])); i++) {
        printf("%d\n", solution.numberOfSteps(numbers[i]));  
    }


	return 0;
}
