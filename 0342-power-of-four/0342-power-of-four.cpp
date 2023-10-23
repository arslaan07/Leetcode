class Solution {
public:
    bool isPowerOfFour(int n) {
        long long number=1;
        while(number<=n){
            if(number==n){
                return true;
            }
            number=number*4;
        }
    return false;
    }
};