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

    string s;
    cin >> s;
    int cnt=0;
    vector<char> str;

    for(int j=s.size()-1; j>=0; j--) str.pb(s[j]); //逆順で受け取る

    while(str.size() >= 5){
        if(str[0] == 'e' && str[1] == 's' && str[2] == 'a' && str[3] == 'r' && str[4] == 'e'){
            //erase
            for(int i=0; i<5; i++) str.erase(str.begin());
        }else if(str[0] == 'm' && str[1] == 'a' && str[2] == 'e' && str[3] == 'r' && str[4] == 'd'){
            //dream
            for(int i=0; i<5; i++) str.erase(str.begin());
        }else if(str[0] == 'r' && str[1] == 'e' && str[2] == 's' && str[3] == 'a' && str[4] == 'r' && str[5] == 'e'){
            //eraser
            for(int i=0; i<6; i++) str.erase(str.begin());
        }else if(str[0] == 'r' && str[1] == 'e' && str[2] == 'm' && str[3] == 'a' && str[4] == 'e' && str[5] == 'r' && str[6] == 'd'){
            //dreamer
            for(int i=0; i<7; i++) str.erase(str.begin());
        }else{
            break;
        }
    }

    bool flag = false;
    if(str.size() == 0) flag = true;

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}