// Title: Rotate String
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/rotate-string/

class Solution {
public:
    bool rotateString(string s, string goal) {
        int m=s.length();
        int n=goal.length();
        for(int  cnt=1; cnt<=m ;cnt++){
            if(s==goal) return true;
        }
        return false;
    }
        if(m != n)
        return false;

            rotate(begin(s),begin(s)+1,end(s));
};
