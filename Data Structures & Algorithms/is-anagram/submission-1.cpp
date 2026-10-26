class Solution {
public:
    bool isAnagram(string s, string t) {
        // std::sort(s.begin(), s.end());
        // std::sort(t.begin(), t.end());

        // return s==t;
        if (s.length() != t.length()){
            return false;
        }

        vector<int> count(256,0);
        for(int i = 0; i < s.length(); ++i){
            count[static_cast<char>(s[i])]++;
            count[static_cast<char>(t[i])]--;
        }

        for (int val : count){
            if(val != 0){
                cout << val;
                return false;
            }
        }
        return true;
    }
};
