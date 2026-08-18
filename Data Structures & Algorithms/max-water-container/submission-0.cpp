class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0;
        int r = n-1;
        int maxarea = 0;
        while(l<r){
            int w = r-l;
            int h = min(heights[l],heights[r]);
            int area = w*h;

            maxarea = max(maxarea, area);

            if(heights[r]>heights[l]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxarea;
    }
};
