#include<bits/stdc++.h>
using namespace std;
bool solveUsingSlidingWindow(map<char,int> textMap , map<char,int> patMap){
    return textMap == patMap;               // if both maps are equal it means it is an anagram 
}
int main(){
    string text;
    string pat;
    cin>>text;
    cin>>pat;
    int n = text.size();
    int k = pat.size();
    map<char,int> textMap , patMap;
    for(int i = 0 ; i  < k ; i++){                          // The first window in text and entire pat string
        textMap[text[i]]++;
        patMap[pat[i]]++;
    }
    int ans = 0;
    if(solveUsingSlidingWindow(textMap , patMap)) ans++;    
    for (int i = k ; i < n ; i++)       // From the end of first window till end of text
    {
         textMap[text[i-k]]--;          // Decrement the frequency of the first element of the previous window
        if(textMap[text[i-k]] == 0) textMap.erase(text[i-k]);   // If frequency is 0 remove from the map
        textMap[text[i]]++;             // Increment the frequency of the last element of current window
        if(solveUsingSlidingWindow(textMap, patMap)) ans++;         // Check whether they are anagram or not
    }
    cout<<ans;
    return 0;
}