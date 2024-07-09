class Solution {
public:
    bool isPalindrome(string str) {
        for(int i=0, j= str.size()-1; i<=j;) {
            
            if(tolower(str[i])==tolower(str[j])){
                i++;
                j--;
                continue;
            }
            
            if(!isalnum(str[i])){
                i++;
                continue;
            }
            if(!isalnum(str[j])){
                j--;
                continue;
            }
            
            
            return false;
            
            
            
        }
        return true;
    }
    
 
    
};