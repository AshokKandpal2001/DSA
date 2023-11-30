#include<bits/stdc++.h>
using namespace std;
string solve(string str){
    int length = str.size();
    if(length <= 10) return str;
    else  return str[0] + to_string(length-2) + str[length - 1];
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        cout<<solve(str)<<endl;
    }   
    return 0;
}