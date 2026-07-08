class Solution {
public:
    int MOD = 1000000007;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& q) {
        vector<int> ans;
        vector<pair<pair<long long, int>, int>> pre;

        int n = s.size();

        // ADDED: precompute powers of 10
        vector<long long> power(n + 1);
        power[0] = 1;

        for (int i = 1; i <= n; i++) {
            power[i] = (power[i - 1] * 10) % MOD;
        }

        long long value = 0;
        int sum = 0;
        int digit = 0;

        for (auto ch : s) {
            if (ch == '0') {
                pre.push_back({{value, digit}, sum});
            }
            else {
                value = (value * 10 + (ch - '0')) % MOD;
                sum += ch - '0';
                digit++;

                pre.push_back({{value, digit}, sum});
            }
        }

        for (auto x : q) {
            int l = x[0];
            int r = x[1];

            if (l == 0) {
                long long temp =
                    (pre[r].first.first * pre[r].second) % MOD;

                ans.push_back((int)temp);
            }
            else {
                int temp_sum =
                    pre[r].second - pre[l - 1].second;

                int temp_digit =
                    pre[r].first.second - pre[l - 1].first.second;

                long long temp_value =
                    (pre[r].first.first -
                     pre[l - 1].first.first * power[temp_digit] % MOD
                     + MOD) % MOD;

                long long temp =
                    (temp_sum * temp_value) % MOD;

                ans.push_back((int)temp);
            }
        }

        return ans;
    }
};