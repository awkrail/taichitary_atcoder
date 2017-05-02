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

/**
int main(){

    int n;
    cin >> n;
    int a[int(1e5)+5];
    int b[int(1e5)+5];

    for(int i=0; i<n; i++) cin >> a[i];

    for(int j=0; j<n; j++) b[j] = 0;

    int MINI = INF+5;
    vector<int> v;
    int cnt = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //一番小さいものの数をいれていく
            if(a[j] < MINI) {
                MINI = a[j];
            }
        }

        if(MINI == INF+5) break;

        //一番小さいものの数値の添字をいれる
        for(int l=0; l<n; l++){
            if(a[l] == MINI) v.pb(l);
        }
        
        //順番にいれる
        for(int k=0; k<v.size(); k++){
            a[v[k]] = INF+5;
            b[v[k]] = cnt;
        }

        cnt++;
        MINI = INF+5;
        v.clear();
    }

    for(int i=0; i<n; i++){
        cout << b[i] << endl;
    }

}
 **/

int main(){

    int n;
    cin >> n;
    int a[int(1e5)+10];

    for(int i=0; i<n; i++) cin >> a[i];

    map<int, int> M;

    for(int i=0; i<n; i++){
        M.insert(mp(a[i], INF));
    }

    int cnt = 0;

    for(int i=0; i<n; i++){
        M[a[i]] = cnt;
        cnt++;
    }

    

}