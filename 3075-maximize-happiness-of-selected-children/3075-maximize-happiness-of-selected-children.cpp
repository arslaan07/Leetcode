class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());
        int n = happiness.size();
        int dec = 0;
        long long sum = 0;
      
        for(int i=n-1; i>=0; i--) {
            if(dec == k) break;
            int num = happiness[i] - dec;
            if(num < 0) break;
            sum += num;
            cout << sum << endl;
            dec++;
        }
        return sum;
    }
};