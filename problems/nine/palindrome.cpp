#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>

using namespace std;


class Solution {
    public:
        bool isPalindrome(int x) {
            int n = 0;
            while (x >= pow(10, n)) {
                n++;
            }

            if (n == 0) {
                return false;
            }

            int numbers[n];

            int temp = x;
            for (int i = 0; i < n; i++) {
                numbers[i] = temp % 10;
                temp = temp / 10;
            }

            for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
                if (numbers[i] != numbers[j]) {
                    return false;
                }
                printf("The %d number is %d and the %d number is %d\n", i, numbers[i], j, numbers[j]);
            }

            printf("\n");

            return true;
        }
};


int main(int argc, char * argv[]) {
    int examples[] = { 121, -121, 10 };
    int length = sizeof(examples)/sizeof(examples[0]);

    Solution solution;
    for (int i = 0; i < length; i++) {
        printf("%d\n", solution.isPalindrome(examples[i]));
    }

	return 0;
}
