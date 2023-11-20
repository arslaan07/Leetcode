class Solution {
public:
    double helper(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int s = 0;
        int e = m;
        while(s <= e) {
            int x = s + (e - s >> 1);
            int l1 = x==0 ? INT_MIN : nums1[x-1];
            int r1 = x==m ? INT_MAX : nums1[x];
            int l2 = (n+m >> 1) - x == 0 ? INT_MIN : nums2[(m+n >> 1) - x - 1];
            int r2 = (n+m >> 1) - x == n ? INT_MAX : nums2[(m+n >> 1) - x];
            if(l1 <= r2 && l2 <= r1) {
                if((m+n)%2 == 0) {
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                }
                else {
                    return min(r1, r2);
                }
                
            }
            else if(l1 > r2) {
                e = x - 1;
            }
            else if(l2 > r1) {
                s = x + 1;
            }
        }
        return 0.0;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        return nums1.size() <= nums2.size() ? helper(nums1, nums2) : helper(nums2, nums1);
    }
};
