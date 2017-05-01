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

ll fact(int x){
    if(x == 1) return 1;
    else return x*fact(x-1);
}

int a[1010];


int main(){

    int n;
    cin >> n;
    ll mod = 1e9 + 7;

    int root = int(sqrt(n)) + 5;

    for(int j=2; j<=n; j++){
        int tmp = j;
        for(int i=2; i<root; i++){
            int cnt = 0;
            while(tmp % i == 0){
                tmp /= i;
                cnt++;
            }
            a[i] += cnt;
        }
        if(tmp != 1) a[tmp] += 1;
    }

    ll sum = 1;
    for(int k=0; k<1010; k++){
        sum *= (a[k]+1);
        sum = sum % MOD;
    }

    cout << sum << endl;



    /**
    ll fact_n = fact(n);


    if(n != 1){
        //素朴に解いてみる
        for(int i=1; i<=fact_n; i++){
            if( fact_n%i == 0) cnt++;
        }
    }

    ll ans = cnt % mod;
     **/


}