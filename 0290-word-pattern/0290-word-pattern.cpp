class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> hashMap;
        auto it = s.begin();
    
        // split the words nd store them in a vector
        vector<string> words;
        while(it < s.end()){
            string word = "";
            while(*it != ' ' && it < s.end()){
                word += *it;
                it++;

            }
            words.push_back(word);
            it++;
        }
        
        
        if(pattern.size() != words.size()) {return false;};
        
        it = pattern.begin();
        int i =0;
        while(it < pattern.end()){
            
            char ch = *it;
            string word = words[i];
            
        
            
            // if the key is not exists yet.
            if(hashMap.find(ch) == hashMap.end()){
                for(auto pair : hashMap){
                    // to ensure it's a one to one relationship
                    if(pair.second == word){return false;}
                }
                
                hashMap[ch] = word;
            }
            
            
            // if the key exists, make sure it's the same word
            else {
                if(hashMap[ch] != word) {return false;}
            }
            
            
            it++;
            i++;
            
        }
        
        return true;
    }
};