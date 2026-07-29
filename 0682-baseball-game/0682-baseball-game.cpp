class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int ms = 0;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i] == "C") {
                if (!s.empty()) {
                    ms -= s.top();
                    s.pop();
                }
            }

            else if (operations[i] == "D") {
                int x = 2 * s.top();
                s.push(x);
                ms += x;
            }

            else if (operations[i] == "+") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.push(a);

                int sum = a + b;
                s.push(sum);
                ms += sum;
            }

            else {
                int x = stoi(operations[i]);
                s.push(x);
                ms += x;
            }
        }

        return ms;
    }
};