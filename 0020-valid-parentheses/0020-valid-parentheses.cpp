class Solution {
public:
    bool isValid(string s) {
                    
        stack<char> stack;
        
        for(auto ch: s){
            if(ch == '{') stack.push('}');
            else if(ch == '[') stack.push(']');
            else if(ch == '(') stack.push(')');
            else { // if it's a closing bracket
                if(stack.empty()) return false;
                else if(stack.top()!=ch) return false;
                stack.pop();
            }
        }
        
     
        // if there are unclosed brackets return false
        return stack.empty();
        
            
    }
};