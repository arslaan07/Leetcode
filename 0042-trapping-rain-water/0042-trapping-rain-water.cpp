class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int l=0;
        int r=0;
        int w=0;
        while(i<=j){
            l=max(l,height[i]);
            r=max(r,height[j]);
            int wi=0;
            int wj=0;
            if(l<r){
                wi=l-height[i];
                w=w+wi;
                i++;
            }
            else{
                wj=wj+r-height[j];
                w=w+wj;
                j--;
            }
        }
        return w;
    }
};