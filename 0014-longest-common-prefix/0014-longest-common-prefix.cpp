class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        
        int n = strs[0].size();
        int m = strs.size();
        
        
        // for each character, loop through the strs and see if the character is matching
        for(int i = 0 ; i < n ; i++){
            int flag = 0;
            for(int j = 0; j < m - 1; j++ ){
                if(strs[j][i] == strs[j + 1][i])
                    continue;
                else
                    flag = 1;
                    break;
            }
            
            // if the character is found in all strings, add it to the prefix
            if(!flag)
                prefix += strs[0][i];
            else
                break;
        }
        
            
        
    return prefix;  
        
    }
            
    
};