class Solution {
public:
    bool isValid(string s) {
        stack<char> valid;
        for(char c:s){
            if (c == '(' || c == '[' || c == '{')
                valid.emplace(c);
            if (c == ')'){
                if(!valid.empty() && valid.top() != '(')
                    return 0;
                else if(!valid.empty()) 
                    valid.pop();
                else return 0;
            }
            if (c == ']'){
                if(!valid.empty() && valid.top() != '[')
                    return 0;
                else if(!valid.empty()) 
                    valid.pop();
                else return 0;
            }
            if (c == '}'){
                if(!valid.empty() && valid.top() != '{')
                    return 0;
                else if(!valid.empty()) 
                    valid.pop();
                else return 0;
            }
        }
        if(!valid.empty())
            return 0;
        return 1;
    }
};
