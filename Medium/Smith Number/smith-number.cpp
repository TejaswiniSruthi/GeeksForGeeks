//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int smithNum(int n) {
        // code here
        int p=0,i=2,res=0,temp=n,r=0;
        while(n>1){
            p=0;
            if(i==temp) return false;
            while(true){
                if(n%i==0){
                    n/=i;
                    p+=1;
                    
                }
                else{
                    if(p!=0){
                        int it=i,rt=0;
                        while(it){
                            rt+=(it%10);
                            it/=10;
                        }
                        res+=(p*rt);
                    }
                    i+=1;
                    break;
                }
            }
        }
        
        while(temp){
            r+=(temp%10);
            temp/=10;
        }
        return r==res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends