class Solution {
public:
    int maxArea(vector<int>& height) {
        int p1=0,p2=height.size()-1,ans=0;
        while(p1<p2)
        {
            int width=p2-p1;
            int height1=min(height[p1],height[p2]);
            ans=max(ans,width*height1);

            height[p1]<height[p2] ? p1++:p2--;
        }
        return ans;
        
    }
};