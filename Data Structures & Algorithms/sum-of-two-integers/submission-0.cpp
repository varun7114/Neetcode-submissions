class Solution {
public:
    int getSum(int a, int b) {
        int sum;
        int carry;
        
        while(b != 0){
            sum =  a ^ b; 
            carry = a & b;
            carry = carry << 1;
            a = sum;
            b = carry;
        }
        return a;
    }
};
