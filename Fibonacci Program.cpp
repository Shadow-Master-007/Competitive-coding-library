#include<iostream>
#include<vector>
using namespace std;

// Using Memoization
int fibo_mem(int n, vector<int>& dp){
    if(n <= 1)  return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibo_mem(n-1, dp) + fibo_mem(n-2, dp);
}

// Using Tabulation
int fibo_tab(int n, vector<int>& tab){
    tab[0] = 0;
    tab[1] = 1;
    for(int i = 2; i<= n; i++){
        tab[i] = tab[i-1] + tab[i-2];
    }
    return tab[n];
}
// O(n) Approach
// Constant Space
int fibo(int n){
    int cur, prev = 1, prev2 = 0;
    if(n == 0)  return 0;
    if(n == 1)  return 1;
    for(int i = 2; i <= n; i++){
        cur = prev + prev2;
        prev2 = prev;
        prev = cur;
    }
    return cur;
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n + 1, -1);
    cout<<fibo(n);
    return 0;
}