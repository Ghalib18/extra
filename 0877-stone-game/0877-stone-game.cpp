class Solution {
public:
    vector<vector<int>> t;

    int solve(vector<int>& p, int i, int j) {
        if (i > j) return 0;

        if (t[i][j] != -1)
            return t[i][j];

        int left = p[i] + min(solve(p, i + 2, j),
                              solve(p, i + 1, j - 1));

        int right = p[j] + min(solve(p, i + 1, j - 1),
                               solve(p, i, j - 2));

        return t[i][j] = max(left, right);
    }

    bool stoneGame(vector<int>& piles) {
        int n = piles.size();

        t.assign(n, vector<int>(n, -1));

        int sum = 0;
        for (auto x : piles)
            sum += x;

        int alice = solve(piles, 0, n - 1);

        return alice > sum - alice;
    }
};