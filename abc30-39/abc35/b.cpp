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

struct dron{
    int x, y;
};

int max_mn = 0;
int min_mn = INF;

void check(dron D){
    int mn = abs(D.x) + abs(D.y);
    if(mn < min_mn) min_mn = mn;
    if(mn > max_mn) max_mn = mn;
}

int main(){

    string s;
    int t;
    cin >> s;
    cin >> t;

    dron D;
    D.x=0;
    D.y=0;

    string cmd = "URDL";

    if(t == 1){
        //最小のケースのみ
        for(int i=0; i<s.size(); i++){
            switch(s[i]){
                case cmd[0]:
                    D.y += dy[3];
                    check(D);
                    break;

                case cmd[1]:
                    D.x += dx[1];
                    check(D);
                    break;

                case cmd[2]:
                    D.y += dy[2];
                    check(D);
                    break;

                case cmd[3]:
                    D.x += dx[0];
                    check(D);
                    break;

                case '?':
                    dron copy_D = D;
                    copy_max = max_mn;
                    copy_min = min_mn;

                    for(int j=0; j<cmd.size(); j++){
                        copy_D = D;
                        switch(cmd[j]){
                            case cmd[0]:
                                copy_D.y += dy[3];
                                check(copy_D);


                            case cmd[1]:
                                copy_D.x += dx[1];
                                check(copy_D);
                                break;

                            case cmd[2]:
                                copy_D.y += dy[2];
                                check(copy_D);
                                break;

                            case cmd[3]:
                                copy_D.x += dx[0];
                                check(copy_D);
                                break;
                        }
                    }
            }
        }
    }




}