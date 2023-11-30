#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
    while(n--){
        int count = 0;
        int a,b,c;
        cin>>a>>b>>c;
         count = a+b+c;
        if(count > 1) ans++; 
    }
    cout<<ans<<endl;
}