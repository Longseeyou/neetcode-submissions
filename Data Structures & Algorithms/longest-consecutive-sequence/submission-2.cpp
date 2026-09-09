class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> prev(nums.begin(), nums.end());
        int ans = 0;
        for(int x:nums){
            if(prev.find(x-1) == prev.end()){
                int length = 1;
                int next = x + 1;
                while(prev.find(next) != prev.end()){
                    length++;
                    next++;
                }
                ans = max(ans, length);
            }
        }
        return ans;
    }
};
