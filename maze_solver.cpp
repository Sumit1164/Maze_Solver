#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>
#include <algorithm>
using namespace std;

// Maze size
const int N = 5, M = 5;

// Maze: 1 = path, 0 = wall
int maze[N][M] = {
    {1, 0, 1, 1, 1},
    {1, 0, 1, 0, 1},
    {1, 1, 1, 0, 1},
    {0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1}};

// Directions: up, down, left, right
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// ----------------------------------------
// DFS (Backtracking)
// ----------------------------------------
bool visitedDFS[N][M];
vector<pair<int, int>> pathDFS;

bool isValid(int x, int y)
{
    return x >= 0 && y >= 0 && x < N && y < M &&
           maze[x][y] == 1;
}

bool dfs(int x, int y)
{
    if (!isValid(x, y) || visitedDFS[x][y])
        return false;

    visitedDFS[x][y] = true;
    pathDFS.push_back({x, y});

    if (x == N - 1 && y == M - 1)
        return true;

    for (int i = 0; i < 4; ++i)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if (dfs(nx, ny))
            return true;
    }

    pathDFS.pop_back(); // backtrack
    return false;
}

// ----------------------------------------
// BFS (Shortest Path)
// ----------------------------------------
bool visitedBFS[N][M];
pair<int, int> parent[N][M];

void bfs(int sx, int sy)
{
    queue<pair<int, int>> q;
    q.push({sx, sy});
    visitedBFS[sx][sy] = true;

    while (!q.empty())
    {
        pair<int, int> front = q.front();
        int x = front.first;
        int y = front.second;
        q.pop();

        if (x == N - 1 && y == M - 1)
            return;

        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dx[i], ny = y + dy[i];
            if (isValid(nx, ny) && !visitedBFS[nx][ny])
            {
                visitedBFS[nx][ny] = true;
                parent[nx][ny] = {x, y};
                q.push({nx, ny});
            }
        }
    }
}

vector<pair<int, int>> reconstructPath()
{
    vector<pair<int, int>> path;
    pair<int, int> curr = {N - 1, M - 1};

    if (!visitedBFS[N - 1][M - 1])
        return {}; // No path found

    while (!(curr.first == 0 && curr.second == 0))
    {
        path.push_back(curr);
        curr = parent[curr.first][curr.second];
    }
    path.push_back({0, 0});
    reverse(path.begin(), path.end());
    return path;
}

// ----------------------------------------
// Display Maze with Path
// ----------------------------------------
void printMazeWithPath(const vector<pair<int, int>> &path)
{
    char display[N][M];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            display[i][j] = maze[i][j] ? '.' : '#';

    for (size_t i = 0; i < path.size(); ++i)
    {
        int x = path[i].first;
        int y = path[i].second;
        display[x][y] = '*';
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            cout << display[i][j] << ' ';
        cout << '\n';
    }
}

// ----------------------------------------
// MAIN
// ----------------------------------------