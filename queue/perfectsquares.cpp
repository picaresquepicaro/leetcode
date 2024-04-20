#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;

class Solution {
    public:
        int numSquares(int n) {
            if (n < 0) return -1;
            if (n == 1) return 1;

            queue<int> q;
            int level = 1;
            q.push(n);

            while (!q.empty()) {
                int size = q.size();

                for (int i = 0; i < size; i++) {
                    int current = q.front();
                    q.pop();

                    for(int j = 1; j * j <= current; j++) {
                        int next = current - j * j;
                        if (next == 0) return level;
                        q.push(next);
                    }
                }
                level++;
            }
            return -1;
        }
};


int main(int argc, char * argv[]) {
    Solution solution;
    printf("%d\n", solution.numSquares(12));
    printf("%d\n", solution.numSquares(13));

	return 0;
}
