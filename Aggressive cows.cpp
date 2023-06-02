// User function Template for C++

class Solution {
public:
    int cow(int n,int k,vector<int> &stalls,int m){
        int c=1;
        int pos=stalls[0];
        for(int i=1;i<n;i++){
            if(stalls[i]-pos>=m){
                c++;
                pos=stalls[i];
            }
            if(c==k){
                return true;
            }
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int l=1,h=stalls[n-1]-stalls[0],res;
        while(l<=h){
            int m=(l+h)/2;
            if(cow(n,k,stalls,m)){
                res=m;
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return res;
    }
};
