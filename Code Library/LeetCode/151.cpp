class Solution {
public:
    string reverseWords(string s) {
        stringstream all(s); 
        string word,ans = "";
        while (all >> word)
            ans = word + " " + ans;
        ans.erase(ans.length()-1,1);
        return ans;
    }
};