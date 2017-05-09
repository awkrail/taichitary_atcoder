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

    int n, q;
    int a[int(2e5)+10];
    cin >> n >> q;

    //素朴に解く
    for(int i=0; i<n; i++) a[i] = 0;

    /**
    for(int i=0; i<q; i++){
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        for(int j=l; j<=r; j++) {
            a[j] = (1^a[j]);
        }
    }
     **/

    for(int i=0; i<q; i++){
        int l, r;
        cin >> l >> r;
        a[l-1] += 1;
        a[r] -= 1;
    }

    int sum = 0;

    int b[int(2e5)+10];

    for(int k=0; k<n; k++){
        sum += a[k];
        b[k] = sum;
    }

    for(int i=0; i<n; i++){
        if(b[i] % 2 == 0) cout << 0;
        else cout << 1;
    }

    cout << endl;
}