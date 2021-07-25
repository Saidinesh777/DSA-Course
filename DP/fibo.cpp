#include<bits/stdc++.h>
using namespace std;

int fibo(int n, unordered_map<int,int> &dp){
    if(n == 1 || n == 2) return 1;
    if(dp.find(n) == dp.end()){
        dp[n] = fibo(n-1,dp)+fibo(n-2,dp);
   }
   return dp[n];
}

int main(){
    int n;
    cin>>n;

    unordered_map<int,int> dp;
    cout<<fibo(n,dp);

    return 0;
}