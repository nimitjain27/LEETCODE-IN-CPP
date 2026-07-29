class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> st1;
        stack<char> st2;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '#') {
                if(!st1.empty()){
                    st1.pop();
                }
            } else {
                st1.push(s[i]);
            }
        }

        for (int j = 0; j < t.size(); j++) {

            if (t[j] == '#') {
                if(!st2.empty()){
                    st2.pop();
                }
            } else {
                st2.push(t[j]);
            }
        }
        while (!st1.empty() && !st2.empty()) {
            char x = st1.top();
            st1.pop();
            char y = st2.top();
            st2.pop();
            if (x != y) {
                return false;
            }
        }

        return st1.empty() && st2.empty();;
    }
};