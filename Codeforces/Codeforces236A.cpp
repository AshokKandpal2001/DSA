#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char,int> mp;
    string str;
    cin>>str;
    for(int i = 0; i < str.size() ; i++) mp[str[i]]++;
    if(mp.size() % 2 == 0) {
        cout<<"CHAT WITH HER!"<<endl;
    } 
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}