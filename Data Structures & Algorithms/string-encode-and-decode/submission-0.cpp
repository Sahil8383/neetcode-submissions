class Solution {
public:

    string encode(vector<string>& str) {
        string ans = "";
        for(int i = 0;i<str.size();i++){
            ans+= to_string(str[i].length()) + "#" + str[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> result;
        
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, length);
            result.push_back(str);
            i = j + 1 + length;
        }
        
        return result;
    }
};
