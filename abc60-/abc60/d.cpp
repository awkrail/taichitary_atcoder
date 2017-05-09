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

struct Wv {
    int w, v;
};

Wv item[110];
int n;
int dp[110][110];

// 引数多すぎ 2^n
int dfs(int rest, int val, int depth){
    //終了条件
    if(rest < 0) return 0;
    if(depth == n) return val;

    //入れる場合
    int p1 = dfs(rest-item[depth].w, val+item[depth].v, depth+1);

    //入れない場合
    int p2 = dfs(rest, val, depth+1);

    return max(p1, p2);
}

// メモ化再帰のつもり
int dfs2(int rest, int depth){
    //終了条件
    if(dp[rest][depth] != -1) return dp[rest][depth];

    int res;
    if(depth == n){
        res = 0;
    }
    //depth番目のものがはいるかどうかを確認してから再帰
    else if(rest < item[depth].w){
        res = dfs2(rest, depth+1);
    }else{
        res = max(
                dfs2(rest-item[depth].w, depth+1)+item[depth].v,
                dfs2(rest, depth+1)
        );
    }

    return dp[rest][depth] = res;
}


int main(){

    int W;
    cin >> n >> W;

    for(int i=0; i<110; i++){
        for(int j=0; j<110; j++) dp[i][j] = -1;
    }

    for(int i=0; i<n; i++){
        cin >> item[i].w >> item[i].v;
    }

    cout << dfs2(W, 0) << endl;

}