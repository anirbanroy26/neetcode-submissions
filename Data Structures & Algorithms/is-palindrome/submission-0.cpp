class Solution {
public:
    bool isPalindrome(string s) {
        
        
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c){ 
            return !isalnum(c);
            }), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int length = s.length();
        cout << length << endl;
        cout << s << endl;
        for(int i = 0; i < length/2; i ++){
            if(s[i] != s[length-i-1]){
                cout << s[i] << " " << s[length-i-1] << (length-i-1) << endl;
                return false;
            }
        }
        return true;
    }
};
