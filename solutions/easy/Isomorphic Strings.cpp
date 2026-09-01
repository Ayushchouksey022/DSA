// Title: Isomorphic Strings
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/isomorphic-strings/

        int m1[256] = {0};
        int m2[256] = {0};

        for(int i = 0; i < s.size(); i++) {

            // Check s -> t
            if(m1[s[i]] != 0 && m1[s[i]] != t[i])
                return false;

            // Check t -> s
            if(m2[t[i]] != 0 && m2[t[i]] != s[i])
                return false;

            // Create mapping
            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        }

        return true;
    }
};
