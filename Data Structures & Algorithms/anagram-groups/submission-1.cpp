class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string s : strs){
                    int freq[26] = {0};

            int n = s.size();
            for(int i=0;i<n;i++){
                freq[s[i] - 'a']++;
            }

            string key;
            for(int i=0;i<26;i++){
                key+= to_string(freq[i]) + '#';
            }

            mp[key].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto&pair : mp){
            ans.push_back(pair.second);
        }

        return ans;
    }
};
