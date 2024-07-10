class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // create a hash map to store occurence of each char in magazine
        unordered_map<char, int> magazineMap;
        
        
        for(auto ch : magazine)
            magazineMap[ch]++;
        
        
        // check if there's enough characters to construct ransomNote
        for(auto ch: ransomNote)
            if(magazineMap[ch] > 0) 
                magazineMap[ch]--;
            else
                return false;
        
        
        return true;
        
            
    }
};