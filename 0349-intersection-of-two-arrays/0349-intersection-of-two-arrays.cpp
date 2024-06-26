class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        vector<int> ans;
        
        for(auto x : nums1) {
            st.insert(x);
        }
        for(auto x : nums2) {
            if(st.find(x) != st.end()) {
                ans.push_back(x);
                st.erase(x);
            }
        }
        
        return ans;
    }
};