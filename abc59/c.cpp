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

    int n;
    cin >> n;
    ll a[int(1e5)+5];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    ll cnt=0;
    ll sum=0;

    sum += a[0];

    for(int j=1; j<n; j++){
        //2つ目からスタート

        if(sum > 0 && sum + a[j] < 0)
        { sum += a[j];
            continue;}//条件を満たしているとき
        if(sum < 0 && sum + a[j] > 0)
        { sum += a[j];
            continue;}
        if(sum < 0 && sum + a[j] <= 0){
            //新しく足した合計が負なので, 正になるまでまわす
            ll dt = 1 - (sum+a[j]);
            cnt += dt;
            a[j] += dt;
            sum += a[j];
            continue;
        }
        if(sum > 0 && sum + a[j] >= 0){
            //新しく足した合計が正なので, 負になるまでまわす
            ll dt = (sum+a[j]) - (-1); //きょり
            cnt += dt;
            a[j] -= dt; //距離分ひく
            sum += a[j];
            continue;
        }
    }

    cout << cnt << endl;


}