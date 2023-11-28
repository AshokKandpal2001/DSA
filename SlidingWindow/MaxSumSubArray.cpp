#include<bits/stdc++.h>
using namespace std;

//Function to find the maximum sum of window of size k
int maxSumSubArray(vector<int> arr , int k){
    int maxSum = 0, sum = 0;
    int n = arr.size();
    for(int i = 0 ; i < k ; i++) sum+=arr[i];    // Loop to find the sum of the first window of size k
    maxSum = max(maxSum, sum);
    for(int i = k ; i < n ; i++){           // loop tp go from first window to last window
        sum+=arr[i];                        // add the last element of the  current window
        sum-=arr[i-k];                      // Remove the last element of the previous window
        maxSum = max(maxSum, sum);          // Compare the sum of the current window with previous window to obtain the maximum sum
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