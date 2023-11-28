/*
    Problem Statement : Given an array of numbers and a positive integer k
    Your task is to find the fist -ve number in every window of size k and if there is no -ve number in the window
    return 0 for that case
    Input : 
    N = 5
    Numbers[] = {-8, 2, 3, -6, 10}
    K = 2
    Output : 
    -8 0 -6 -6
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> findFirstNegativeNumber(vector<int> numbers , int k){   // Time Complexity : O( n * k)
    vector<int> ans;
    int n = numbers.size();
    int i = 0;

    // Itearate the array
    while(i <= n - k){
        int j = i;
        bool isFound = false;
        while(j < i + k){        // loop inside a window
            if(numbers[j] < 0){         // If -ve number is found push it into array and break
                ans.push_back(numbers[j]);
                isFound = true;
                break;
            }
            else j++;
        }
        if(!isFound) ans.push_back(0);      // If no -ve number is found, Push 0 in the array
        i++;
    }
    return ans;
}

vector<int> slidingWindowApproach(vector<int> numbers , int k){ // Time Complexity : O(n)
    queue<int> q;
    for(int i = 0 ; i  < k; i++){                   // Adding the negavtive numbers in first window
        if(numbers[i] < 0) q.push(numbers[i]);
    }
    int n = numbers.size();
    vector<int> ans;
    for(int i = k; i <= n ; i++){                // From the end of the previous window till the end 
        if(numbers[i] < 0) q.push(numbers[i]);      // If current number is negative push it into the stack
       if(!q.empty()){     // If queue is not empty it means we have a negative number for currenr window
        ans.push_back(q.front());       //so add the front of the queue in the answer
        if(numbers[i-k] == q.front()) q.pop();    // Remove the element from previous window and if its negative remove form the wueue to
       }
       else{
            ans.push_back(0);   // If queue is empty it means we don't have a negative number for current window so add 0
       }
    }
    return ans;
}

int main(){
    int n;  cin>>n;
    vector<int> numbers(n);
    for(int i=0; i<n; i++)  cin>>numbers[i];
    int k;  cin>>k;
    vector<int> answer = findFirstNegativeNumber(numbers, k);
    for(int it : answer) cout<<it<<" ";
    cout<<endl;
    vector<int> answer2 = slidingWindowApproach(numbers , k);
    for(int it : answer2) cout<<it<<" ";
    return 0;
}