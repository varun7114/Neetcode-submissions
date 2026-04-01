class Solution {
public:
    bool isPalindrome(string s) {

        string lower = "";
        for(char c : s){
            if(isalnum(c))
                lower.push_back(tolower(c));
        }

        string reverse = lower;

        int left = 0;
        int right = lower.size()-1;

        while(left< right){
            swap(lower[left], lower[right]);
            left++;
            right--;
        }     
        
        return (lower == reverse);
        
    }
};
