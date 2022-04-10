class Solution {
    bool isPalindrome(string str,int start,int end){
        while(start<=end){
            if(str[start++]!=str[end--]) return false;
        }
        return true;
    }
    void hero(int ind,vector<vector<string>> &ans,vector<string> &str,string s){
        if(s.size()==ind){
            ans.push_back(str);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(isPalindrome(s,ind,i)){
                str.push_back(s.substr(ind,i-ind+1));
                hero(i+1,ans,str,s);
                str.pop_back();
            }
        }
        
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> str;
        hero(0,ans,str,s);
        return ans;
    }
};