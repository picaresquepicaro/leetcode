#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>

using namespace std;

class Solution {
    public:
        vector<string> fizzBuzz(int n) {
            vector<string> final;

            for (int i = 1; i <= n; i++) {
                string word = "";
                bool divisibleBy3 = i % 3 == 0;
                bool divisibleBy5 = i % 5 == 0;

                if (divisibleBy3) {
                    word += "Fizz";
                } 

                if (divisibleBy5) {
                    word += "Buzz";
                }

                if (!divisibleBy3 && !divisibleBy5) {
                    word += to_string(i);
                }

                final.push_back(word);
            }

            return final;
        }
};

int main(int argc, char * argv[]) {
    Solution solution;
    vector<string> fizzed = solution.fizzBuzz(15);

    for (auto fizz : fizzed) {
        cout << fizz << " ";
    }

    cout << endl;


	return 0;
}
