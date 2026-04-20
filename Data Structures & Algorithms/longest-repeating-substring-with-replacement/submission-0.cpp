class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> m(26);
        int i = 0, j = 0;
        int maxC = 0;
        int ans = 0;
        while(j<s.size()){
            m[s[j] - 'A']++;
            maxC = max(maxC,m[s[j]-'A']);
            int wind_len = j-i + 1;
            if(wind_len - maxC > k){
                m[s[i]-'A']--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
