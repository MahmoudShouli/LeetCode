class Solution {
public:
    bool isAnagram(string s, string t) {
        
        s = sortString(s);
        t = sortString(t);
        
        return s == t;
    }
    
public:
    string sortString(string str){
        sort(str.begin(), str.end());
        
        return str;
    }
};