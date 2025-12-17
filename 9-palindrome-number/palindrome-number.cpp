class Solution {
public:
    bool isPalindrome(int x) {
        long long rem = 0;
        int n, org;
        org = x;
        if(x < 0){
            return false;
        }
        while(x != 0){
        n = x % 10;
        rem = rem * 10 + n;
        x = x / 10;
        }
        if(rem == org){
            return true;
        }
        else
            return false;
    }
};