#include <iostream>
#include <cmath>

using namespace std;

int dp[1002][1002];

#define MOD 10007

int main() {
  int N, K;

  cin >> N >>K;

  dp[0][0] =0;
  dp[1][0] =1;
  dp[1][1] = 1;

  for(int i =2; i<=N; i++){
    dp[i][0] = 1;
    for(int j =1; j <=i; j++){
      dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % MOD ;
    }
  }

  cout << dp[N][K];
  

  return 0;
}