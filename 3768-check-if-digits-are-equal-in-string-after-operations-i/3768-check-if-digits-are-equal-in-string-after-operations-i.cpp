class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size() > 2) {
            string newS = "";
            for(int i = 0; i < s.size()-1; i++) {  
                int sum = (s[i]-'0') + (s[i+1]-'0');
                newS += to_string(sum % 10);
            }
            s = newS;  
        }
        return s[0]==s[1];

    }
};