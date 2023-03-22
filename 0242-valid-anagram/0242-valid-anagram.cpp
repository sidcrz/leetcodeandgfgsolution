class Solution {
public:
    bool isAnagram(string str, string str2) {
       unordered_map<int,int>mp;
        if(str.size()!=str2.size())
            return false;
        for(int i=0;i<str.size();i++)
        {
            mp[str[i]]++;
        }
        for(int i=0;i<str2.size();i++)
        {
            mp[str2[i]]--;
            if(mp[str2[i]]<0)
            {
                return false;
            }
        }
        return true;
    }
};