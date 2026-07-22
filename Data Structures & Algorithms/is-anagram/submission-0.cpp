class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<int,int> mp;
        unordered_map<int,int> mm;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            mm[t[i]]++;
        }
        return mp == mm;
    }
};
