class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int num : nums){
            count[num]++;
        }

        vector<vector<int>> bucket(nums.size() +1);
        for(auto&pair : count){
            bucket[pair.second].push_back(pair.first);
        }

        vector<int> result;
        for(int freq = bucket.size()-1; freq>0; freq--){
            for(int num : bucket[freq]){
                result.push_back(num);

                if(result.size() == k){
                    return result;
                }
            }

        }
        return result;
    }
};
