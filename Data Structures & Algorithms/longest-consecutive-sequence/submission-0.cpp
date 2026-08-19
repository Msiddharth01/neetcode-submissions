class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        if(n == 0) return 0;
        int longestLen = 1;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1) == st.end()){
                int x = it;
                int cnt = 1;
                            while(st.find(x+1)!=st.end()){
                x = x+1;
                cnt = cnt+1;
            }
                        longestLen = max(longestLen,cnt);


            }
        }
        return longestLen;        
    }
};