/* Problem Statement : 
    Given an array of n size and a positive integer k, Find the maximum sum of a sub array of K size
*/
#include<bits/stdc++.h>
using namespace std;
// Brute Force Approach
// int solve(vector<int> array , int k){
//     int maxSum = 0;
//     int n = array.size();
//     for(int i = 0 ; i <= n-k; i++){
//         int sum = 0;
//         for(int j = i; j < i+k; j++){
//             sum+=array[j];
//         }
//         maxSum = max(sum, maxSum);
//     }
//     return maxSum;
// }

void solveUsingSlidingWindow(vector<int> array, int k){
    int maxSum = 0;
    int sum = 0;
    for(int i = 0; i < k ; i++) sum+=array[i];
    maxSum = max(sum, maxSum);
    int i = 0;
    int j = k-1;
    while(j < array.size()){
        sum-=array[i];
        i++;
        j++;
        sum+=array[j];
        maxSum = max(sum, maxSum);
    }
    cout<< maxSum;
}   
int main(){
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i = 0; i < n; i++) cin>>array[i];
    int k;
    cin>>k;
    // cout<<solve(array,k)<<endl;
    solveUsingSlidingWindow(array,k);
    return 0;
}