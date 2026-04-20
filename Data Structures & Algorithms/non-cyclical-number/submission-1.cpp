class Solution {
private:
    unordered_set<int> seen;

public:
    bool isHappy(int n) {

        if(n == 0) 
            return false;

        int sum = 0;

        while(n != 0){
            int digit = n % 10;
            sum = sum + (digit*digit);
            n = n / 10;
        }
        if(sum == 1)
            return true;
        else{
            if(seen.count(sum)) 
                return false;
            seen.insert(sum);
            return isHappy(sum);
        }
    }
};
