class Solution {
public:
    bool check(double mid, vector<vector<int>>& sq) {
        double up = 0.0, down = 0.0;

        for (auto &x : sq) {
            double y = x[1];
            double l = x[2];
            double top = y + l;

            if (mid <= y) up += l * l;
            else if (mid >= top) down += l * l;
            else {
                down += l * (mid - y);
                up   += l * (top - mid);
            }
        }
        return down >= up;
    }

    double separateSquares(vector<vector<int>>& sq) {
        double lo = 0.0, hi = 0.0;

        for (auto &x : sq) {
            hi = max(hi, (double)x[1] + (double)x[2]);
        }

        // Binary search on double
        for (int i = 0; i < 100; i++) {
            double mid = lo + (hi - lo) / 2.0;
            if (check(mid, sq)) hi = mid;
            else lo = mid;
        }

        return hi;
    }
};
