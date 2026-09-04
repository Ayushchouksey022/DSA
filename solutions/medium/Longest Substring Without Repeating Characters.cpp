// Title: Longest Substring Without Repeating Characters
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/

    int lengthOfLongestSubstring(string s) {
        int hash[256];
        int n= s.size();
        int l=0,r=0,maxlen=0;
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
           int  len =r-l+1;
           maxlen= max(len,maxlen);
           hash[s[r]]=r;
           r++;
        }
        return maxlen;
    }
public:
class Solution {
        fill(hash, hash + 256, -1);
};
