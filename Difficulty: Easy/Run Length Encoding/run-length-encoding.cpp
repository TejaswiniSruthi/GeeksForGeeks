class Solution {
  public:
    string encode(string s) {
        // code here
        int n = s.length();
        if(n==1) return s+"1";
        string res = "";
        int c = 0;
        for(int i=1;i<n;i++){
            c++;
            if(s[i-1] != s[i]){
                res+= s[i-1] + to_string(c);
                c = 0;
            }
        }
        if(s[n-1]!=s[n-2]){
            res += s[n-1] + to_string(1);
            
        }
        else{
            c++;
            res += s[n-1] + to_string(c);
        }
        return res;
    }
};