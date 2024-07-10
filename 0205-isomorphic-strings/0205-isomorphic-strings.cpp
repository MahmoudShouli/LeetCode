class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char,char> hashMap;
        auto it1 = s.begin();
        auto it2 = t.begin();
        
        while(it1 <= s.end()){
            char ch1 = *it1;
            char ch2 = *it2;
            
            // if character is not a key yet
            if(hashMap.find(ch1) == hashMap.end()) {
                for (auto pair: hashMap){
                    if(pair.second == ch2)
                        return false;
                }
                hashMap[ch1] = ch2;
            }
            
            // if it's already a key
            else 
                if(hashMap[ch1] != ch2)
                    return false;
            
            it1++;
            it2++;
            
        }
        
        return true;
    }
};