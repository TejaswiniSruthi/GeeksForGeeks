class Solution {
  public:
    int count(string& s) {
        // code here
        int n = s.length();
        map<char,int> mp;
        for (int i=0 ; i<n ; i++){
            mp[s[i]]++;
        }
        
        int res = 0;
        for(auto &pair : mp){
            if(pair.second %2 == 0) res++;
        }
        return res;
    }
};