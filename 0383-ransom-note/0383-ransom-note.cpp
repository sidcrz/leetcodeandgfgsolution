class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     int count[26]={0};
        for(char it:magazine)
        {
            count[it-'a']++;
        }
        
        for(char it : ransomNote)
        {
            if(count[it - 'a']-- <= 0)
                return false;
}
 return true;
    }
};