#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<char> ans;
    int n = str.size();
    for(int i = 0 ; i < n ; i++){
        if(str[i] >= '1' && str[i] <= '3') ans.push_back(str[i]);
    }
    sort(ans.begin() , ans.end());
    string ansStr;
    for(int i = 0 ; i < ans.size() ; i++){
        ansStr+=ans[i];
        ansStr+='+';
    }
    ansStr.pop_back();
    cout<<ansStr<<endl;
    return 0;
}