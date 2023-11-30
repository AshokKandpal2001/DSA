#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i = 0; i < n ; i++) cin>>arr[i];
    int x = 0;
    for(int i=0 ; i < n ;i++){
        if(arr[i].find("++")!=string::npos) x++;
        else x--;
    }
    cout<<x<<endl;
    return 0;
}