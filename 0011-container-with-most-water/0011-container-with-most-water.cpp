class Solution {
public:
    int maxArea(vector<int>& a) {
        int n=a.size();
        int area=0;
        int maxArea=0;
        int i=0;
        int j=n-1;
        while(i<j){
            area=min(a[i],a[j])*(j-i);
            maxArea=max(maxArea,area);
            if(a[i]<a[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxArea;
    }
};