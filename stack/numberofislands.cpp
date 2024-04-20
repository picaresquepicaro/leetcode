#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <list>
#include <algorithm>
#include <set>

using namespace std;

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
        int numIslands(vector<vector<char>> &grid) {
            int islands = 0;
            for (int i = 0; i < grid.size(); i++) {
                for (int j = 0; j < grid[0].size(); j++) 
                    if (grid[i][j] == '1') {
                        dfs(i, j, grid);
                        islands++;
                    }
            }

            return islands;
        }
};


int main(int argc, char * argv[]) {
    vector<vector<char>> grid1 {
        { '1', '1', '1', '1', '0' },
        { '1', '1', '0', '1', '0' },
        { '1', '1', '0', '0', '0' },
        { '0', '0', '0', '0', '0' }
    };

    vector<vector<char>> grid2 {
        { '1', '1', '0', '0', '0' },
        { '1', '1', '0', '0', '0' },
        { '0', '0', '1', '0', '0' },
        { '0', '0', '0', '1', '1' }
    };

    Solution solution;
    printf("%d\n", solution.numIslands(grid1));
    printf("%d\n", solution.numIslands(grid2));

	return 0;
}
