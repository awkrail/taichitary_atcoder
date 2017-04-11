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

ll a[int(1e5)+5];

int main(){

    ll n,x;
    ll cnt=0;
    cin >> n >> x;
    for(ll i=0; i<n; i++) cin >> a[i];

    for(ll j=0; j<n-1; j++){
        if(a[j] + a[j+1] <= x) continue;
        if(a[j] > a[j+1]){
            ll tmp_sum = a[j] + a[j+1];
            cnt += tmp_sum - x; //総和-xが回数
            a[j] -= (tmp_sum - x); //その分,a[j]からひく
            if(a[j] < 0) {
                a[j+1] -= abs(a[j]);
                cnt += abs(a[j]); //マイナス分
            } //0未満になった分をa[j+1]から引く

        }else if(a[j] <= a[j+1]){
            ll tmp_sum = a[j] + a[j+1];
            cnt += tmp_sum - x;
            a[j+1] -= (tmp_sum - x);
            if(a[j+1] < 0) {
                a[j+1] = 0; //マイナスになられては困るので
            } //同様
        }
    }

    cout << cnt << endl;



}