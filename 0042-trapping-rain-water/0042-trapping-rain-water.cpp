class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int wi = 0;
        int li[n];
        li[0]=height[0];
        for(int i=1;i<n;i++){
            li[i]=max(li[i-1],height[i]);
        }
        int ri[n];
        ri[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            ri[i]=max(ri[i+1],height[i]);
        }
        for (int i = 0; i < n; i++) {
            wi += min(li[i], ri[i]) - height[i];
        } 
        return wi;
    }
};
