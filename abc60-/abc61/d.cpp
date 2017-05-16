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

struct Edge{
	int from, to;
    ll cost;
};

ll d[1050];
int n, m;
Edge e[3000];

bool bellman_ford(){

    d[0] = 0;

    for(int count=0; count<n; count++){
        for(int i=0; i<m; i++){
            int u = e[i].from; //from
            int v = e[i].to; //to
            int c = e[i].cost; // weight
            if(d[u] + c > d[v]){
                d[v] = d[u] + c;
                cout << v << " " << d[v] << endl;
                cout << "count " << count << endl;
                cout << n << endl;
                if(count == v-1) return false;
            }
        }
    }
    return true;
}

int main(){

    cin >> n >> m;

    for(int i=0; i<n; i++){
	int a, b, c;
	cin >> a >> b >> c;
    a--; b--;
    e[i].from = a;
    e[i].to = b;
    e[i].cost = c;
	}

    for(int i=0; i<n; i++){
        d[i] = -2 * INF;
    }

    bool flg = bellman_ford();


    if(flg){
        cout << d[n-1] << endl;
    }else{
        cout << "inf" << endl;
    }
	


}
