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


ll d[1050];
int n, m;
ll M[1100][1100];

int main(){
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) M[i][j] = LINF;
    }

    for(int i=0; i<n; i++){
        d[i] = LINF;
    }

    for(int i=0; i<m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        M[a][b] = -c;
    }

    d[0] = 0;

    for(int roop=0; roop<n; roop++){
        for(int i=0; i<n; i++){
            int u = roop; //from
            int v = i; //to
            if(M[u][v] != LINF && d[u] + M[u][v] < d[v]){
                d[v] = d[u] + M[u][v];
            }
        }
    }

    bool neg[1100];
    for(int i=0; i<n; i++) neg[i] = false;

    for(int roop=0; roop<n; roop++){
        for(int i=0; i<n; i++){
            int u = roop; //from
            int v = i;  //to
            if(M[u][v] != 2 * INF && d[u] + M[u][v] < d[v]){
                d[v] = d[u] + M[u][v];
                neg[v] = true;
            }
        }
    }

    bool flg = true;
    for(int i=0; i<n; i++){
        if(neg[i]) flg = false;
    }

    if(!neg[n-1]){
        cout << -d[n-1] << endl;
    }else{
        cout << "inf" << endl;
    }
}
