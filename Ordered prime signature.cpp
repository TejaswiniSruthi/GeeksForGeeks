// User function Template for C++

class Solution{
public:
    vector<int> orderedPrime(int n){
        // code here
        int t=n,ans=1;
        vector<int>res;
        for(int i=2;i<=n;i++){
            int c=0;
            if(t==1){
                break;
            }
            
            while(t%i==0){
                t/=i;
                c++;
            }
            if(c!=0) res.push_back(c);
            ans*=(c+1);
        }
        sort(res.begin(),res.end());
        res.push_back(ans);
        return res;
    }
};
