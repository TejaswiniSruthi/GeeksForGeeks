//User function Template for C++
typedef long long ll;
#define N 1e4
vector<bool>s(N+1,true);
class Solution {
  public:
  void Seive(){
      s[0]=s[1]=false;
      for(int i=2;i*i<=N;i++){
          if(s[i]==true){
              for(int j=i*i;j<=N;j+=i){
                  s[j]=false;
              }
          }
      }
  }
    int sumOfAll(int l, int r){
        // code here
        Seive();
        int c=0;
        for(int i=l;i<=r;i++){
            if(s[i]){
                c+=i;
            }
            else{
                for(int j=2;j<i;j+=1){
                    if(s[j] and i%j==0){
                        c+=j;
                    }
                }
            }
        }
        return c;
    }
};
