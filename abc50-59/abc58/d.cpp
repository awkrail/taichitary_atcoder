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

struct Point{
	int x;
	int y;
};

int main(){

	int n, m;
	cin >> n >> m;

	int x[int(1e5)+10];
	int y[int(1e5)+10];
	
	for(int i=0; i<n; i++){
		cin >> x[i];
	}

	for(int i=0; i<m; i++){
		cin >> y[i];
	}

	//長方形のポイントとなる点
	vector<Point> P;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			Point tmp;
			tmp.x = x[i];
			tmp.y = y[j];
			P.pb(tmp);
		}
	}






}
