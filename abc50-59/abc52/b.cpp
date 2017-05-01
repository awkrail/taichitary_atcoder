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
    char s[110];
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    int mx = 0;
    int tmp = 0;


    for(int j=0; j<n; j++){
        if(s[j] == 'I'){
            tmp += 1;
            if(mx < tmp) mx = tmp; //最大値の更新
        }else if(s[j] == 'D'){
            tmp -= 1;
        }
    }

    cout << mx << endl;

}