class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        int n = nums.size();
        vector<long long> ans;
        unordered_map<long long, long long> mpp;
        priority_queue<pair<long long, long long>> pq;
        for(int i=0; i<n; i++) {
            mpp[nums[i]] += freq[i];
            pq.push({mpp[nums[i]], nums[i]});
            
            while(mpp[pq.top().second] != pq.top().first) {
                pq.pop();
            }
            if(!pq.empty())
                ans.push_back(pq.top().first);
            else
                ans.push_back(0);
        }
        return ans;
    }
};