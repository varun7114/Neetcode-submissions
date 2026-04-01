class Solution {
public:
    bool isPalindrome(string s) {


        string t;
        for(char c: s){
            if(isalnum(c))
                t.push_back(tolower(c));
        }

        string temp = t;
        int left = 0;
        int right = t.size() - 1;
        
        while(left < right){
            swap(t[left], t[right]);
            left++;
            right--;
        }
        return (temp == t);
    }
};
