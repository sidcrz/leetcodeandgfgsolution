class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin(), s.end());//(n*logn)
        sort(t.begin(), t.end());//(n*logn)
        return s == t; 
    
        
    }
};