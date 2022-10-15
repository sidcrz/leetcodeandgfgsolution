class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        stack<pair<int,int>>q;
        int x=color;
        int y=image[sr][sc];
        int col=image[0].size();
        int row=image.size();
        if(x==y)
        {
            return image;
        }
         q.push({sr,sc});
        
        while(!q.empty())
        {
            int sm=q.top().first;
            int mn=q.top().second;
            q.pop();
            
            if(sm<0||mn<0||sm>=row||mn>=col)
            {
                continue;
            }
           // cout<<sm<<" "<<mn<<endl;
            if(image[sm][mn]==y)
            {
                image[sm][mn]=x;
                q.push({sm,mn+1});
                q.push({sm,mn-1});
                q.push({sm-1,mn});
                q.push({sm+1,mn});
                
            }
            
        }
        return image;
    }
};