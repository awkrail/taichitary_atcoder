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

int main(){
    int N, M;
    cin >> N >> M;

    int NMAX = 1000;
    int MMAX = 2000;

    int a[MMAX], b[MMAX];
    ll c[MMAX];

    for(int i=0; i<M; i++){
        cin >> a[i] >> b[i] >> c[i];
        c[i] = -c[i];
    }

    // 経路の最短距離をいれる
    ll dist[NMAX];

    for(int i=0; i<N; i++){
        dist[i] = 2 * INF;
    }

    // 初期値
    dist[0] = 0;

    for(int roop = 0; )




}