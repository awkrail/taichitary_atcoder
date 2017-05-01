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

    ll n,m;
    cin >> n >> m;

    ll cnt;

    //単純にSの数だけやってみる
    /**
    for(int i=0; i<n; i++){
        if(m < 2) break;
        m -= 2;
        cnt++;
    }

    //4つ以上ならまだ作れる
    if(m >= 4){
        while(m >= 4){
            m -= 4;
            cnt++;
        }
    }

     **/
    if(2*n <= m){
        // n個分つくることができるとき(あまりができる)..のこりmのあまった分
        cnt = n;
        m -= 2*n;

        if(m >= 4){
            //4つ以上の分でつくる
            cnt += m/4;
        }
    }else{
        //あまりができない(n個にたりない)
        cnt += m/2;
    }


    cout << cnt << endl;


}