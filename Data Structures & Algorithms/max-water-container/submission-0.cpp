class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0, r=heights.size()-1;
        int ans = 0;
        while(l < r){
            int s = min(heights[l], heights[r]) * (r-l);
            ans = max(ans, s);
            if(heights[l] < heights[r]){
                int i = l+1;
                while (heights[i] < heights[l])
                    i++;
                l = i;
            }
            else if(heights[r] < heights[l]){
                int i = r-1;
                while (heights[i] < heights[r])
                    i--;
                r = i;
            }
            else{
                l++;
                r--;
            }
        }
        return ans;
    }
};
