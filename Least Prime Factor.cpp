// User function Template for C++
#define N 1e6
vector<int>s(N,0);
class Solution {
  public:
  void seive(int n){
      s[1]=1;
      s[2]=2,s[3]=3;
      for(int i=4;i<=n;i+=1){
          if(i%2==0){
              s[i]=2;
          }
          else if(i%3==0){
              s[i]=3;
          }
           
          else{
              for(int j=5;j<=sqrt(i);j+=2){
                  if(i%j==0){
                      s[i]=j;
                      break;
                  }
                  
              }
          }
          if(s[i]==0){
              s[i]=i;
          }
      }
  }
    vector<int> leastPrimeFactor(int n) {
        // code here
        seive(n);
        vector<int>res;
        for(int i=0;i<=n;i++){
            res.push_back(s[i]);
        }
        return res;
    }
};
