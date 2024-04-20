#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <algorithm>
#include <set>

using namespace std;

class Node {
    public:
        int val;
        vector<Node*> neighbors;

        Node() {
            val = 0;
            neighbors = vector<Node*>();
        }

        Node(int _val) {
            val = _val;
            neighbors = vector<Node*>();
        }

        Node(int _val, vector<Node*> _neighbors) {
            val = _val;
            neighbors = _neighbors;
        }
}

class Solution {
    private:
        void dfs(int row, int col, vector<vector<char>> &g) {
            if (row < 0 || row >= g.size() || 
                col < 0 || col >= g[0].size() ||
                g[row][col] != '1') {
                    return;  
            }

            g[row][col] = '#';
            dfs(row + 1, col, g);
            dfs(row, col + 1, g);
            dfs(row - 1, col, g);
            dfs(row, col - 1, g);
        }

    public:
        Node * cloneGraph(Node * node) {
            Node * 
            set<Node*> s;

            s.emplace(node);

            
        }
};


int main(int argc, char * argv[]) {
    vector<int> adj[4];
    adj[2].push_back(4);
    adj[1].push_back(3);
    adj[4].push_back(2);
    adj[3].push_back(1);


    Solution solution;


	return 0;
}
