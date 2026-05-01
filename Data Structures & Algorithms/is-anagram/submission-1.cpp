class Solution {
   public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) {
            return false;
        }

        vector<int> sCharCount(26, 0);
        vector<int> tCharCount(26, 0);


        for (int i = 0; i < s.size(); i++){
            sCharCount[s[i] - 'a']++;
            tCharCount[t[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++){
            if(sCharCount[i] != tCharCount[i]){
                return false;
            }
        }
        
        return true;
    }
};
