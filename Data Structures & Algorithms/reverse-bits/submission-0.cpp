class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reverse = 0;
        for(int i = 0; i < 32; i++){
            int lsb = n & 1; // obtain the LSB
            reverse = reverse << 1; // make space for result
            reverse = reverse | lsb; // add the lsb to the result
            n = n >> 1; // move to the next bit
        }
        return reverse;
    }
};
