class Solution {
public:
    bool check(vector<int> freq, int k){
        sort(freq.rbegin(), freq.rend());
        int sum = 0;
        for(int i=1; i<26; ++i){
            sum += freq[i];
            if(sum > k)
                return false;
        }
        return true;
    }

    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int n = s.size();
        int ans = 0;
        int l=0, r=0;
        freq[s[l]-'A']++;
        while(l <= r && r < n){
            if(check(freq, k)){
                r++;
                if(r < n)
                    freq[s[r]-'A']++;
                else break;
            }
            else {
                cout << l << r << '\n';
                ans = max(ans, r-l);
                freq[s[l]-'A']--;
                l++;
            }
        }
        cout << l << ' ' << r;
        ans = max(ans, r-l);
        return ans;
    }
};
