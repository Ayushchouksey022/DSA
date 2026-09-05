// Title: Valid Anagram
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        return false;
        int hash[256]={0};

        for(int i=0; i< s.length();i++){
            hash[s[i]]++;
        }
    }
        for(int i=0; i< t.length();i++){
        }
            hash[t[i]]--;
        for(int i; i<256; i++){
        if(hash[i] != 0)
        return false;
        }
        return true ;
};
