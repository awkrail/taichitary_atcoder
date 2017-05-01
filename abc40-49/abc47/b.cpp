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

struct xy{
    int x, y;
};


int a[100+10];
xy p[100+10];

int main(){

    //ちょっとちがうのでかえって修正

    int W,H, n;
    cin >> W >> H >> n;
    for(int i=0; i<n; i++){
        cin >> p[i].x >> p[i].y >> a[i];
    }
    xy left,right;

    //左端の点を記録
    left.x = left.y = 0;
    right.x = W; right.y = H;

    for(int j=0; j<n; j++){
        if(a[j] == 1){
            if(left.x < p[j].x) left.x = p[j].x;
        }else if(a[j] == 2){
            if(right.x > p[j].x) right.x = p[j].x;
        }else if(a[j] == 3){
            if(left.y < p[j].y) left.y = p[j].y;
        }else if(a[j] == 4){
            if(right.y > p[j].y) right.y = p[j].y;
        }
    }

    if(right.x > left.x && right.y > left.y){
        cout << (right.x - left.x)*(right.y - left.y) << endl;
    }else{
        cout << 0 << endl;
    }
}