#include <iostream>
#include <vector>

using namespace std;

// Define the directions for moving in the maze (right, down, left, up)
const vector<pair<int, int>> directions = {
    {0, 1},  // Right
    {1, 0},  // Down
    {0, -1}, // Left
    {-1, 0}  // Up
};

// Function to print the maze
void printMaze(const vector<vector<int>>& maze) {
    for (const auto& row : maze) {
        for (int cell : row) {
            if (cell == -1) {
                cout << "* "; // Path
            }
            else {
                cout << cell << " ";
            }
        }
        cout << endl;
    }
}

// Function to check if a position is within the maze and not a wall
bool isValid(const vector<vector<int>>& maze, int x, int y) {
    return x >= 0 && x < maze.size() && y >= 0 && y < maze[0].size() && maze[x][y] == 0;
}

// Depth-First Search to solve the maze
bool solveMaze(vector<vector<int>>& maze, int x, int y) {
    if (maze[x][y] == 2) {
        return true; // Reached the goal
    }

    // Mark the current cell as part of the path
    maze[x][y] = -1;

    for (const auto& dir : directions) {
        int newX = x + dir.first;
        int newY = y + dir.second;

        if (isValid(maze, newX, newY) && solveMaze(maze, newX, newY)) {
            return true;
        }
    }

    // Backtrack: unmark the cell
    maze[x][y] = 0;
    return false;
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns in the maze: ";
    cin >> rows >> cols;

    vector<vector<int>> maze(rows, vector<int>(cols));

    cout << "Enter the maze (0 for path, 1 for wall, 2 for goal):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> maze[i][j];
        }
    }

    int startX, startY;
    cout << "Enter the starting position (row and column): ";
    cin >> startX >> startY;

    cout << "Maze before solving:\n";
    printMaze(maze);

    if (solveMaze(maze, startX, startY)) {
        cout << "Path to the goal found:\n";
    }
    else {
        cout << "No path to the goal exists.\n";
    }

    printMaze(maze);

    return 0;
}