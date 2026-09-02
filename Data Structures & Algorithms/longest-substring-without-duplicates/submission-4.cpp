class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, bool> freq;
        int ans = 0;
        int l=0, r=0;
        while(l <= r && r < s.size()){
            if(!freq[s[r]-'a']){
                freq[s[r]-'a'] = 1;
                r++;
            }
            else{
                ans = max(ans, r-l);
                freq[s[l]-'a'] = 0;
                l++;
            }
        }
        ans = max(ans, r-l);
        return ans;
    }
};
