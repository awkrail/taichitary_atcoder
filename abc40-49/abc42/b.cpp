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

string s[110];
int sum[110];

int main(){

    int n, l;
    cin >> n >> l;

    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    for(int k=0; k<l; k++){
        //1文字ずつbabbleSortを実行する
        for(int i=0; i<n; i++){
            sum[i] += s[i][k];
        }

        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){

                if(sum[j-1] > sum[j]) swap(s[j-1], s[j]);
            }
        }

        for(int f=0; f<n; f++){
            cout << s[f];
        }

        for(int g=0; g<n; g++){
            cout << sum[g] << " ";
        }

        cout << endl;

    }

    /**
    for(int i=0; i<n; i++){
        cout << s[i];
    }

    cout << endl;
    **/


}