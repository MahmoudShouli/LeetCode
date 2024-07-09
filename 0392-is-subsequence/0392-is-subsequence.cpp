class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;int j = 0;int c = 0;
        
        if(s.size()==0 && t.size()!=0)
            return true;
        if(s.size()!=0 && t.size()==0)
            return false;
        if(s.size()==0 && t.size()==0)
            return true;
    
           
        while(i<=s.size()-1) {
            
            while(j<=t.size()-1){
            if(s[i] == t[j]){i++;j++;c++;}
            
            else if(s[i] != t[j]){j++;} 
            }
            
            j=0;
            i++;
            
        }
        
        if(c==s.size())
            return true;
        else
            return false;
        
    }
};