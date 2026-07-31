class Solution {
public:
    int minimumPushes(string word) {
        vector<int> al(26, 0);

        for (char ch : word)
            al[ch - 'a']++;

        sort(al.begin(), al.end(), greater<int>());

        int ans = 0;

        for (int i = 0; i < 26; i++) {
            if (al[i] == 0) break;

            if (i < 8)
                ans += al[i] * 1;
            else if (i < 16)
                ans += al[i] * 2;
            else if (i < 24)
                ans += al[i] * 3;
            else
                ans += al[i] * 4;
        }

        return ans;
    }
};