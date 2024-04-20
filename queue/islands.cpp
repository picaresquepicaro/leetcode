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
    private:
        void bfs(int row, int col, vector<vector<char>> &g) {
            int delRow[] = { 0, 1, 0, -1 };
            int delCol[] = { 1, 0, -1, 0 };

            queue<pair<int, int>> q;
            q.push({row, col});

            g[row][col] = '#';
            
            while (!q.empty()) {
                int nrow = q.front().first;
                int ncol = q.front().second;

                q.pop();
        
                for (int i = 0; i < 4; i++) {
                    int checkrow = nrow + delRow[i];
                    int checkcol = ncol + delCol[i];

                    if (checkrow >= 0 && checkrow < g.size() && 
                        checkcol >= 0 && checkcol < g[0].size() && 
                        g[checkrow][checkcol] == '1') {
                            g[checkrow][checkcol] = '#';
                            q.push({checkrow, checkcol});        
                        }
                    }   
            }
        }

    public:
        int numIslands(vector<vector<char>> &grid) {
            int islands = 0;
            for (int i = 0; i < grid.size(); i++) {
                for (int j = 0; j < grid[0].size(); j++) 
                    if (grid[i][j] == '1') {
                        islands++;
                        bfs(i, j, grid);
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
