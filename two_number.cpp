#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int arr[n];
    int ans=0,c=0;
    int A[32]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans^=arr[i];
    }
    while(ans){
        if(ans&1)break;
        ans=ans>>1;
        c++;
    }
    int l=0,r=0;
    for(int i=0;i<n;i++){
        if((arr[i]>>c)&1){
            l^=arr[i];
        }
        else{
            r^=arr[i];
        }
    }
    cout<<l<<" "<<r<<;
}
