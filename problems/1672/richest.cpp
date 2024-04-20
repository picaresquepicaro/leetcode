#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>

using namespace std;


class Solution {
    public:
        int maximumWealth(vector<vector<int>> &accounts) {
            unsigned int maximum = 0;
            for (auto account : accounts) {
                vector<int> acc = account;

                unsigned int sum = 0;
                for (auto element : acc) {
                    sum += element;
                }

                if (sum >= maximum) {
                    maximum = sum;
                }

            }

            return maximum;
        }
};

int main(int argc, char * argv[]) {
    vector<int> vec1{ 1, 2, 3 };
    vector<int> vec2{ 7, 3, 5 };
    vector<int> vec3{ 8, 9, 1 };

    vector<vector<int>> listOfVectors{ vec1, vec2, vec3 };

    Solution solution;
    printf("%d\n", solution.maximumWealth(listOfVectors));


	return 0;
}
