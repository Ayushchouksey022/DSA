// Title: Remove Outermost Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/remove-outermost-parentheses/

        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]==')') count--;
            if(count != 0) ans.push_back(s[i]);
            if(s[i]=='(') count++;
        }
        return ans;
    }
};
public:
    string removeOuterParentheses(string s) {
        int count=0;
class Solution {
