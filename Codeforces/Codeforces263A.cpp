#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    int currentX = 0;
    int currentY = 0;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                currentX = i;
                currentY = j;
            }
        }
    }
    int distance = abs(2 - currentX) + abs(2 - currentY);
    cout<<distance<<endl;
    return 0;
}