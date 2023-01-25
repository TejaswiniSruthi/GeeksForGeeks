#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int i=0,p=0,s=0,n;
    cin>>n;
    vector<int>vect;
    while(true){
        s+=((n>>i)&1)*pow(2,i);
        if(((n>>i)&1)==0){
            p+=(!((n>>i)&1))*pow(2,i);
        }
        else{
            p+=((n>>i)&1)*pow(2,i);
        }
        cout<<i<<"\n";
        if(s==n){
            break;
        }
        
        i++;
        
    }
    //vect.push_back(p-n);
    //vect.push_back(p);
    cout<<p-n<<" "<<p<<" "<<!(0);
}
