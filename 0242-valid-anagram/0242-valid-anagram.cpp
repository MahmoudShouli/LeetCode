class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false;
        
        unordered_map<char, int> countMap;
        
        for(auto ch : s) {
            countMap[ch]++;
        }
        
        for(auto ch : t) {
            if(countMap.find(ch) == countMap.end() || countMap[ch] == 0)
                return false;
            else
                countMap[ch]--;
        }
        
        
        return true;
        
        
    }
};