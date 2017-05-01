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

struct AB{
    ll A;
    ll B;
};

int f(ll x){
    int keta = 1;
    while(x >= 10){
        x /= 10;
        keta++;
    }

    return keta;
}

int main(){

    long long n;
    cin >> n;
    AB ab[int(1e5 + 50)];
    double root_n = sqrt(n) + 10;
    int root_int = int(root_n);
    int cnt = 0;

    for(int i=1; i<root_int; i++){
        if(n % i == 0){
            ab[cnt].A = i;
            ab[cnt].B = n / i;
            cnt++;
        }
    }

    int mx = 0;
    int min_keta = 1e5 + 10;
    int keta = 0;
    for(int j=0; j<cnt; j++){
        if(mx < ab[j].A || mx < ab[j].B){
            keta = max(f(ab[j].A), f(ab[j].B)); //桁の大きいほうを取る
            if(min_keta > keta) min_keta = keta; //桁の大きいほうの最小値を求める
        }
    }

    cout << min_keta << endl;

}