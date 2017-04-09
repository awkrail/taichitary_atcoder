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

    int n, a[int(1e5 + 10)], check[int(1e5+10)];
    cin >> n;
    bool flag = true;
    int data = 1;
    int ck = 0;


    for(int i=0; i<n; i++){
        cin >> a[i];
        check[a[i]]++;
    }


    //対称性のチェック
    if(n % 2 == 0){
        for(int count=0; count<n; count++){
            if(count % 2 == 0) {continue;}
            if(check[count] != 2) {flag = false;}
        }
    }else{
        for(int odd_count=1; odd_count<n; odd_count++){
            if(odd_count % 2 != 0) {continue;}
            if(check[odd_count] != 2) {flag = false;}
        }
    }


    if(flag){
        int c = (n/2);
        for(int k=0; k<c; k++){
            data = (2*data) % MOD;
        }

        cout << data << endl;

    }else{
        cout << 0 << endl;
    }
}