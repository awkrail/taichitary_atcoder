#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <deque>
#include <ctime>

using namespace std;

#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define pb push_back
#define mp make_pair
#define all(r) (r).begin(),(r).end()
#define rall(r) (r).rbegin(),(r).rend()
#define fi first
#define se second
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int INF = 1e9;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;
double EPS = 1e-8;
const double PI = acos(-1);

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

int n;
int a[int(1e6)+10];

int dfs(int u, int cost){
    if(u == n-1) return cost; //一番奥の層で終了
    if(u > n) return INF;

    return min(dfs(u+1, cost+abs(a[u+1]-a[u])), dfs(u+2, cost+abs(a[u+2]-a[u])));

}


int main(){

    cin >> n;

    for(int i=0; i<n; i++) cin >> a[i];

    //int c = dfs(0, 0);

    int dp[int(1e6)+10];
    dp[1] = abs(a[1]-a[0]);

    for(int i=2; i<n; i++){
        dp[i] = min(dp[i-2]+abs(a[i]-a[i-2]), dp[i-1]+abs(a[i]-a[i-1]));
    }

    cout << dp[n-1] << endl;

}