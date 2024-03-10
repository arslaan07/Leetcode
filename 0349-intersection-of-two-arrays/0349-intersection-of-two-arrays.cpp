class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        set<int> st2;
        
        for(auto x : nums1) {
            st.insert(x);
        }
        for(auto x : nums2) {
            if(st.find(x) != st.end()) {
                st2.insert(x);
            }
        }
        vector<int> ans(st2.begin(), st2.end());
        return ans;
    }
};