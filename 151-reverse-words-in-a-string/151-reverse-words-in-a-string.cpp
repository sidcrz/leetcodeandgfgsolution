class Solution {
public:
    string reverseWords(string s) 
    {
       string tmp="", ans="";
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            if(ch==' ')
            {
                if(tmp!="")
                    ans = tmp + " " + ans;
                tmp = "";        
            }
            else 
                tmp += ch;
        }
        
        if(tmp!="")
            ans = tmp + " " + ans;
        ans.pop_back();
        
        return ans;
    }
        
};