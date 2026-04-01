class Solution {
public:
    bool isPalindrome(string s) {
        string r = "";
        for(char c: s){
            if(isalnum(c))
                r.push_back(tolower(c));
        }

        string t = r;

        int left = 0;
        int right = r.size()-1;

        while(left < right){
            swap(r[left], r[right]);
            left++;
            right--;
        }

        return (r == t);

    }
};
