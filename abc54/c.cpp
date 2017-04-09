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

vector<int> edge[10];
int n, m;

//TODO: C問題 解けない.. 次に聞く

/**
int stroke(int start, int visited[]){

    vector<int>::iterator ite;
    for(ite = edge[start].begin(); ite != edge[start].end(); ite++ ){
        if(visited[*ite] == 0){
            //いったことないところだったとき
            visited[*ite] = 1; //いったことにして
            res += stroke(*ite, visited, res);
            return res;
        }else{
            //いったことないところがないとき
            //もし, 全部の部分に訪れていれば..
            bool flag2 = true;
            for(int i=0; i<n; i++){
                if(visited[i] == 0) flag2 = false;
            }
            if(flag2) return res + 1;
            else return res;
        }
    }

    return 0;

}
 **/

int main(){

    cin >> n >> m;
    int node, target;
    int visited[20];

    for(int j=0; j<20; j++) visited[j] = 0; //初期化

    for(int i=0; i<m; i++){
        cin >> node; //頂点をかく
        cin >> target; //nodeからつながっているところ
        node--; target--; //0に頂点を合わせる
        edge[node].push_back(target); // 添字:頂点 vectorの要素:行けるところの頂点
        edge[target].push_back(node);
    }

    for(int k=0; k<n; k++){
        cout << k << "番目";
        vector<int>::iterator ite;
        for(ite = edge[k].begin(); ite != edge[k].end(); ite++){
            cout << (*ite);
        }

        cout << endl;
    }

    //int cnt = stroke(0, visited, 0);
    //cout << cnt << endl;

}