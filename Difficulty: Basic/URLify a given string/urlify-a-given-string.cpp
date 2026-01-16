// User function Template for C++
class Solution {
  public:
    string URLify(string& s) {
        // code here
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                res+="%20";
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};