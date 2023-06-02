int x[4] = {-1, 0, 0, 1};
int y[4] = {0, 1, -1, 0};

bool check(int r, int c, int n, int m)
{
    if (r < 0 || r >= n || c < 0 || c >= m)
        return false;

    return true;
}

bool solve(vector<vector<char>> &board, string &word, vector<vector<int>> &vis, int n, int m, int r, int c, int index)
{
    vis[r][c] = 1;

    if (word.size() == index)
        return true;

    for (int k = 0; k < 4; k++)
    {
        int nr = r + x[k];
        int nc = c + y[k];

        if (check(nr, nc, n, m))
        {
            if (board[nr][nc] == word[index] && vis[nr][nc] == 0 && solve(board, word, vis, n, m, nr, nc, index + 1))
            {
                return true;
            }
        }
    }

    vis[r][c] = 0;

    return false;
}

bool isWordExist(vector<vector<char>> &board, string word)
{
    // Code here

    int n = board.size();
    int m = board[0].size();

    vector<vector<int>> vis(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == word[0] && solve(board, word, vis, n, m, i, j, 1))
            {
                return true;
            }
        }
    }

    return true;
}