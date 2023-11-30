#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    string str2;
    cin>>str1>>str2;
    bool isBreaked = false;
    for(int i = 0 ; i < str1.size() ; i++){
        if(tolower(str1[i]) == tolower(str2[i])) 
            continue;
        else if(tolower(str1[i]) < tolower(str2[i])){
            cout<<"-1"<<endl;
            isBreaked = true;
            break;
        }
        else{
            cout<<"1"<<endl;
            isBreaked = true;
            break;
        }
    }
    if(isBreaked == false){
        cout<<"0"<<endl;
    }
    return 0;
}