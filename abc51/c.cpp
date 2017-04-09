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

struct Pointer{
    int x,y;
};

void print(int ab, char dir){
    for(int i=0; i<ab; i++){
        cout << dir;
    }
}

int main(){

    Pointer Sxy, Txy;
    cin >> Sxy.x >> Sxy.y >> Txy.x >> Txy.y;

    int wth = Txy.x - Sxy.x;
    int hgt = Txy.y - Sxy.y;

    char dir[5] = {'U', 'D', 'R', 'L'};

    //一週目は長方形の周り
    print(wth, dir[2]);
    print(hgt, dir[0]);
    print(wth, dir[3]);
    print(hgt, dir[1]);

    //次は長方形+1おおきいところをいく
    //S -> T
    print(1, dir[3]); //一回左へ
    hgt++;
    print(hgt, dir[0]); //大きく上へ
    wth++;
    print(wth, dir[2]); //大きく右へ
    print(1, dir[1]); //下に降りる

    //T -> S
    print(1, dir[2]); //右へ
    print(hgt, dir[1]); //大きく下へ
    print(wth, dir[3]); //大きく左へ
    print(1, dir[0]);

    cout << endl;

}