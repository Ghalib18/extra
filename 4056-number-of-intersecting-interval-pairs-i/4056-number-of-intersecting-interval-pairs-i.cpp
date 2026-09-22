class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {

        vector<pair<int, int>> events;

        for (auto &x : intervals) {
            events.push_back({x[0], 1});   // start
            events.push_back({x[1], -1});  // end
        }

        sort(events.begin(), events.end(), [](auto &a, auto &b) {
            if (a.first != b.first)
                return a.first < b.first;

            return a.second > b.second; // start before end
        });

        long long active = 0;
        long long ans = 0;

        for (auto [pos, type] : events) {

            if (type == 1) {
                // Current interval intersects
                // with all currently active intervals
                ans += active;
                active++;
            } 
            else {
                active--;
            }
        }

        return ans;
    }
};