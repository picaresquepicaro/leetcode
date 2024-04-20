#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        bool canConstruct(string ransomNote, string magazine) {
            unordered_map<char, int> umap;
            for (int i = 0; i < int(magazine.length()); i++) {
                char c = magazine.at(i);

                if (umap.find(c) == umap.end()) {
                    umap.insert({ c, 1 });
                } else {
                    umap.at(c) += 1;
                }
            }

            for (int i = 0; i < int(ransomNote.length()); i++) {
                char c = ransomNote.at(i);

                if (umap.find(c) == umap.end()) {
                    return false;
                } else {
                    int count = umap[c];
                    umap[c] = count - 1;
                }
            }

            return true;

        }
};

int main(int argc, char * argv[]) {
    string a = "aa";
    string b = "aab";

    Solution solution;

    printf("%d\n", solution.canConstruct(a, b));


	return 0;
}
