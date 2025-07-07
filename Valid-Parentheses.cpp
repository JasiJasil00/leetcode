class Solution {
public:
    bool isValid(string s) {
        stack<char> hash;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                hash.push(c);
            } else {
                if (hash.empty()) return false;
                char top = hash.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    hash.pop();
                } else {
                    return false;
                }
            }
        }
        return hash.empty();
    }
};
