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
    int n, w;
    cin >> n >> w;
    int W[110], V[110];

    for(int i=0; i<n; i++){
        cin >> W[i] >> V[i];
    }

    vector<ll> itm[5];
    // 妙な制約には気をつけよう
    ll w1 = W[0];

    for(int i=0; i<n; i++){
        itm[W[i]-w1].pb(V[i]);
    }

    for(int i=0; i<5; i++) sort(itm[i].begin(), itm[i].end());

    for(int i=0; i<5; i++){
        itm[i].pb(0);
        reverse(itm[i].begin(), itm[i].end());
    }

    ll value_max = -1;

    //累積和をとる
    for(int i=0; i<itm[0].size(); i++)if(i+1 != itm[0].size()) itm[0][i+1] += itm[0][i];

    for(int j=0; j<itm[1].size(); j++)if(j+1 != itm[1].size()) itm[1][j+1] += itm[1][j];

    for(int k=0; k<itm[2].size(); k++)if(k+1 != itm[2].size()) itm[2][k+1] += itm[2][k];

    for(int l=0; l<itm[3].size(); l++)if(l+1 != itm[3].size()) itm[3][l+1] += itm[3][l];


    // unsigned int で0-1はUNSINGED_INTMAX-1になるのでやばい
    for(int i=0; i<itm[0].size(); i++){
        for(int j=0; j<itm[1].size(); j++){
            for(int k=0; k<itm[2].size(); k++){
                for(int l=0; l<itm[3].size(); l++){
                    ll val_sum = 0;
                    val_sum = itm[0][i] + itm[1][j] + itm[2][k] + itm[3][l];
                    ll sum_W = w1*i + (w1+1)*j + (w1+2)*k + (w1+3)*l;
                    if(sum_W <= w && value_max < val_sum) value_max = val_sum;
                }
            }
        }
    }

    cout << value_max << endl;

}