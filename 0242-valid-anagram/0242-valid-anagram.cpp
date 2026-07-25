class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m;
        map<char, int> n;

        for (char c : s) {
            m[c]++;
        }

        for (char c : t) {
            n[c]++;
        }

        return m == n;
    }
};