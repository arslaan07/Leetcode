class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expectedHeights;
        expectedHeights=heights;
        sort(expectedHeights.begin(),expectedHeights.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(expectedHeights[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};