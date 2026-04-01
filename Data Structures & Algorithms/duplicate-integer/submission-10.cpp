#include<unordered_set> //has only unique values
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //optimized solution
        unordered_set<int> s;
        for(int x: nums){
            if(s.count(x)) // check if value is there in set (if there then duplicate)
                return true;
            else
                s.insert(x); // add to set (if value is not there then not duplicate)
        }
        return false;
    }
};


// instead of s.count(x) ==> check if x is there in s or not --> returns boolean 0 or 1 
// can use if(s.find(x) != s.end()) ==> s.find(x) returns an iterator handle that points to the address of the value needed.
//                                  ==> s.end() returns an iterator handle that points to an address that is outside the set indicating not found 
//                                  ==> so when you do if(s.find(x) != s.end()) it means if the iterator address handle returned is not equal to some out of bound address,
//                                  ==> then the iterator address handle returned must be in the set (meaning value is there in the set)
//                                  ==> auto it = s.find(x); gives address of x in unordered_set. can dereference using *it to get value