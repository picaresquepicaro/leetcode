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
        int openLock(vector<string> &deadends, string target) {
            string start = "0000";
            set<string> des(deadends.begin(), deadends.end());
            queue<string> q;
            q.push(start);

            if (des.find(start) != des.end())
                return -1;

            int steps = 0;

            while(!q.empty()) {
                int n = q.size();
                for (int i = 0; i < n; i++) {
                    auto curr = q.front();
                    q.pop();

                    if (curr == target)
                        return steps;

                    for (int i = 0; i < 4; i++) {
                        string up = curr.substr(0, i) + to_string(curr[i] == '0' ? 9 : curr[i] - '0' - 1) + curr.substr(i + 1);
                        string down = curr.substr(0, i) + to_string(curr[i] == '9' ? 0 : curr[i] - '0' + 1) + curr.substr(i + 1);
                 
                        if (!des.count(up)) {
                            des.insert(up);
                            q.push(up);
                        }

                        if (!des.count(down)) {
                            des.insert(down);
                            q.push(down);
                        }
                    }
                }
                steps++;
            }

            
            return -1;
        }
};


int main(int argc, char * argv[]) {
    vector<string> de1 { "0201", "0101", "0102", "1212", "2002" };
    string tgt1 = "0202";

    Solution solution;
    printf("%d\n", solution.openLock(de1, tgt1));

	return 0;
}
