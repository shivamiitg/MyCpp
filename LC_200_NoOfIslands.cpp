#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) {
            return 0;
        }
        int numIslands = 0;
        for (int x = 0; x < grid.size(); x++) {
            for (int y = 0; y < grid[0].size(); y++) {
                numIslands += sink(grid, x, y);
            }
        }
        return numIslands;
    }

private:
    int sink(vector<vector<char>>& grid, int x, int y) {
        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == '0') {
            return 0;
        }
        grid[x][y] = '0';
        sink(grid, x + 1, y);
        sink(grid, x - 1, y);
        sink(grid, x, y + 1);
        sink(grid, x, y - 1);
        return 1;
    }
};

int main() {
    Solution solution;

    // Example 1
    vector<vector<char>> grid1 = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}
    };

    int result1 = solution.numIslands(grid1);
    cout << "Output for Example 1: " << result1 << endl;

    // Example 2
    vector<vector<char>> grid2 = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    // Calculate the number of islands for the second grid
    int result2 = solution.numIslands(grid2);
    cout << "Output for Example 2: " << result2 << endl;

    return 0;
}
