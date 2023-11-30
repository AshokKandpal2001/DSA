#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int boardArea = m*n;
    int ans = floor(boardArea / 2);
    cout<<ans<<endl;
    return 0;
}