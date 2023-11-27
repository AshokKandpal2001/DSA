#include<bits/stdc++.h>
using namespace std;
int maxSumSubArray(vector<int> arr , int k){
    int maxSum = 0, sum = 0;
    int n = arr.size();
    for(int i = 0 ; i < k ; i++) sum+=arr[i];
    maxSum = max(maxSum, sum);
    for(int i = k ; i < n ; i++){
        sum+=arr[i];
        sum-=arr[i-k];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0 ;  i < n ; i++){
        cin>>arr[i];
    }
    int k; cin>>k;
    cout<<"Maximum Sum of Sub-Array of size " << k <<" is" << maxSumSubArray(arr, k) << endl;
    return 0;
}